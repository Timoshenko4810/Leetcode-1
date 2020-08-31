#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    vector<int> insert(10,0);
    for(int i=0;i<10;++i)
        cin >> insert[i];
    vector<int> num;
    for(int i=0;i<10;++i){
        for(int j=0;j<insert[i];++j){
            num.push_back(i);
        }
    }
    sort(num.begin(), num.end());
    int index=0, i=insert[0];
    if(i==num.size()) {cout << 0;return 0;}
    cout << num[i];
    for(;index<i;++index)
        cout << 0;
    ++i;
    for(;i<num.size();++i)
        cout << num[i];
    return 0;
}
