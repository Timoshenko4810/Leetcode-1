#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    int getMaxLen(vector<int>& nums) {
        if(nums.size()==0) return 0;
        int max=0;
        int i=0;
        while(i<nums.size()){
            while(i<nums.size()&&nums[i]==0)
                ++i;
            int len=0;
            int j=i;
            int count=0;
            for(;j<nums.size();++j){
                if(nums[j]==0){
                    if(count%2==0&&len>max)
                        max=len;
                    break;
                }
                if(nums[j]<0){
                    count++;
                    if(len>max)
                        max=len;
                }
                ++len;
            }
            if(j==nums.size()){
                if(count%2==0&&max<len){
                    max=len;
                    break;
                }
            }
            ++i;
        }
        return max;
    }
};
int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
