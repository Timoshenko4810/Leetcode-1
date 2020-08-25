#include <iostream>
using namespace std;
class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        string temp;
        temp.push_back(s[0]);
        int len=1;
        int i=1;
        while(i<=s.size()/2){
            if(s[i]!=temp[0]){
                temp.push_back(s[i]);
                len++;
                i++;
            }
            else{
                if(judge(s,temp,i,len))
                    return true;
                else {
                    temp.push_back(s[i]);
                    ++i;
                    ++len;
                }
            }
            while(s.size()%len!=0){
                temp.push_back(s[i]);
                ++i;
                ++len;
            }
        }
        return false;
    }
    bool judge(string s, string temp,int i,int len){
        while(i<s.size()){
            for(int j=0;j<len;++j,++i) {
                if (temp[j] != s[i])
                    return false;
            }
        }
        return true;
    }
};
int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
