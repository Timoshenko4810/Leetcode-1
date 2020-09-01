#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<string> input (n, "");
    string M={'1','0','X','9','8','7','6','5','4','3','2'};
    int power[] = {7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2};
    bool flag=true, flag2=true;
    cin.get();
    for(int i=0;i<n;++i){
        getline(cin, input[i]);
    }
    for(int i=0;i<n;++i){
        flag2=true;
        int code=0;
        for(int k=0;k<input[i].size()-1;++k){
            if(!isdigit(input[i][k])) {cout << input[i] << endl;flag=false;flag2=false; break;}
            code=code + (input[i][k]-'0')*power[k];
        }
        if(flag2) {
            code %= 11;
            if (input[i][17] != M[code]) {
                flag = false;
                cout << input[i] << endl;
            }
        }
    }
    if(flag) cout << "All passed";
    return 0;
}
