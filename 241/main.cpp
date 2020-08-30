#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    string shortestPalindrome(string s) {
        int len=s.size();
        int index=len/2;
        if(len%2!=0){
            while(index>=0) {
                int i,j;
                for (i = index - 1, j = index + 1; i >= 0 && j < len; --i, ++j) {
                    if (s[i] != s[j]) {
                        index--;
                        break;
                    }
                }
                if(i<0){
                    while(j<len){
                        s.insert(s[j], 0);
                        ++j;
                    }
                }
            }
        }
        else{
            int i,j;
            for()
        }
    }
};
int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
