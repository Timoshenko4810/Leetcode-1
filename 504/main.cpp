#include <iostream>
#include <string>
using namespace std;
class Solution {
public:
    string convertToBase7(int num) {
        string temp;
        bool flag=false;
        if(num<0) {flag=true;num=-num;}
        if(num==0) return "0";
        while(num!=0){
            temp.push_back(num%7+'0');
            num/=7;
        }
        string res;
        if(flag) res.push_back('-');
        for(int i=temp.size()-1;i>=0;--i){
            res.push_back(temp[i]);
        }
        return res;
    }
};
int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
