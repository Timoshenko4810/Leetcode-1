#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
struct school{
    int code;
    int credit;
};
bool comparision1(school a, school b){
    return a.credit<b.credit;
}
bool comparision2(school a, school b){
    return a.code < b.code;
}
int main() {
    int n;
    cin >> n;
    vector<school> input(n);
    for(int i=0;i<n;++i){
        cin >> input[i].code >> input[i].credit;
    }
    sort(input.begin(), input.end(), comparision2);
    vector<school> temp;
    int i=1;
    temp.push_back(input[0]);
    while(i<input.size()){
        if(input[i].code == temp.back().code)
            temp.back().credit+=input[i].credit;
        else temp.push_back(input[i]);
        ++i;
    }
    sort(temp.begin(), temp.end(), comparision1);
    cout << temp.back().code << ' ' << temp.back().credit;
    return 0;
}
