#include <iostream>
#include <vector>
using namespace std;

//被循环转晕了，每次开启新的一圈应该-2而不是-1
//两种解法，

class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> res(n, vector<int>(n,0));
        int x=0,y=0;
        int j=n-1;
        int i=1;
        if(n==1){
            res[0][0]=1;
            return res;
        }
        while(i<=n*n&&j>0){
            for(int k=0;k<j&&i<=n*n;++k){
                res[x][y]=i;
                ++y;
                ++i;
            }
            for(int k=0;k<j&&i<=n*n;++k){
                res[x][y]=i;
                ++x;
                ++i;
            }
            for(int k=0;k<j&&i<=n*n;++k){
                res[x][y]=i;
                --y;
                ++i;
            }
            for(int k=0;k<j&&i<=n*n;++k){
                res[x][y]=i;
                --x;
                ++i;
            }
            ++x;
            ++y;
            j=j-2;
        }
        if(n%2) res[n/2][n/2]=n*n;
        return res;
    }
};


class Solution1 {
public:
    vector<vector<int>> generateMatrix(int n) {
        int direction=0;
        int count=1;
        int x=0,y=0;
        vector<vector<int>> res(n, vector<int>(n,0));
        while(count<=n*n){
            res[x][y]=count++;
            switch(direction%4){                    //记得判断下标是不是越界，越界的话必然更换方向
                case 0: if(y+1>n-1||res[x][y+1]!=0) direction++;break;
                case 1: if(x+1>n-1||res[x+1][y]!=0) direction++;break;
                case 2: if(y-1<0||res[x][y-1]!=0) direction++;break;
                default: if(x-1<0||res[x-1][y]!=0) direction++;
            }
            switch(direction%4){
                case 0: ++y;break;
                case 1: ++x;break;
                case 2: --y;break;
                default:--x;
            }
        }
        return res;
    }
};
int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
