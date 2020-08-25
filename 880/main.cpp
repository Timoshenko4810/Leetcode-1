#include <iostream>
#include <string>
using namespace std;
class Solution {
public:
    string decodeAtIndex(string S, int K) {
        long long int size=0;
        for(auto i:S){
            if(isalpha(i))
                size+=1;
            else size*=(i-'0');
        }
        int N = S.size();
        string result;
        for(int i=N-1;i>=0;--i){
            K%=size;
            if(K==0&&isalpha(S[i]))
                result.push_back(S[i]);
            if(isdigit(S[i]))
                size = size/(S[i]-'0');
            else size--;
        }
        return result;
    }
};
int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
