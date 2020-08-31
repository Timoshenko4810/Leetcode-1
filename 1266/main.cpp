#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
//求点与点之间的距离，其中可以沿x轴，y轴，对角线移动
//那么只要不断地求两点之间的最快时间就好
//设点(x1,y1)与(X2,y2)之间，dx为x2-x1, dy 为y2-y1，沿对角线时x与y同时变化1，因此结果为dx与dy中的最大值
class Solution {
public:
    int minTimeToVisitAllPoints(vector<vector<int>>& points) {
        int i=0;
        int res=0;
        if(points.size()<=1) return res;
        while(i<points.size()-1){
            res+=max(abs(points[i+1][0]-points[i][0]), abs(points[i+1][1]-points[i][1]));
            ++i;
        }
        return res;
    }
};
int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
