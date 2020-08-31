#include <iostream>
using namespace std;
int main() {
    int a,b,d;
    cin >> a >> b >> d;
    int sum = a+b;
    if(sum==0) {cout << 0; return 0;}
    string temp;
    while(sum!=0){
        temp.push_back(sum%d+'0');
        sum/=d;
    }
    string res;
    for(int i=temp.size()-1;i>=0;--i){
        res.push_back(temp[i]);
    }
    for(char re : res)
        cout << re;
    return 0;
}
