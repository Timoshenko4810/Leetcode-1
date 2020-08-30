#include <iostream>
using namespace std;
class Solution {
public:
    int isPrefixOfWord(string sentence, string searchWord) {
        int count=1;
        int i=0;
        int j=0;
        while(i<sentence.size()){
            if(sentence[i]==' '){
                ++count;
                j=0;
                ++i;
            }
            else{
                if(sentence[i]==searchWord[j]){
                    ++i;
                    ++j;
                    if(j==searchWord.size())
                        return count;
                }
                else{
                    while(sentence[i]!=' ')
                        ++i;
                }
            }
        }
        return -1;
    }
};
int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
