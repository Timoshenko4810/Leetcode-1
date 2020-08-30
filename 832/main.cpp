#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& A) {
        int len = A.size();
        for(int i=0;i<len;++i){
            int j=0, k=A[i].size()-1;
            while(j<k){
                int temp=A[i][j];
                A[i][k]==0?A[i][j]=1:A[i][j]=0;
                temp==0?A[i][k]=1:A[i][k]=0;
                ++j;
                --k;
            }
            if(k==j)
                A[i][j]==1?A[i][j]=0:A[i][j]=1;
        }
        return A;
    }
};
int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
