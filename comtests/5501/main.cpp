#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    int minDays(vector<vector<int>>& grid) {
        int min=INT_MAX;
        for(int i=0;i<grid.size();++i){
            int count=0;
            for(int j=0;j<grid.size();++j){
                if(grid[i][j]==1)
                    count++;
            }
            if(count<min)
                min=count;
        }
        for(int j=0;j<grid[0].size();++j){
            for(int i=0;)
        }
        return min;
    }
};
int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
