#include <iostream>
#include <string>
#include <vector>
using namespace std;
class Solution {
public:
    bool judgeCircle(string moves) {
        vector<int> index(2,0);
        for(char move : moves){
            switch(move){
                case 'R': index[0]++;break;
                case 'L': index[0]--;break;
                case 'U': index[1]++;break;
                default: index[1]--;break;
            }
        }
        return index[0]==0&&index[1]==0;
    }
};
int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
