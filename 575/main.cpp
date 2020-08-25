#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
class Solution {
public:
    int distributeCandies(vector<int>& candies) {
        unordered_map<int, int> temp;
        for(int i:candies){
            temp.insert(make_pair(i,i));
        }
        int res = temp.size();
        temp.find('a');
        return res>candies.size()/2?candies.size()/2:res;
    }
};
int main() {
    string tem;
    tem.find("a");
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
