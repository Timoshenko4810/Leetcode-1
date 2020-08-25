#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    bool hasValidPath(vector<vector<int>>& grid) {
        int i=0,j=0;
        int l1=grid.size(),l2=grid[0].size();
        while(i<l1&&j<l2){
            switch(grid[i][j]){
                case 1:++j;break;
                case 2:++i;break;
                case 3:
            }
        }
    }
};
int main() {

    return 0;
}
