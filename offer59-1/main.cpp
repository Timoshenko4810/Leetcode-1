#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        vector<int> res;
        int max=0;
        for(int i=0;i<k;++i)
            if(nums[i]>max)
                max=nums[i];
        res.push_back(max);
        for(int i=k,j=1;i<nums.size();++i,++j){
            if(nums[j]!=max){
                max>nums[i]?max=max:max=nums[i];
            }
            else{
                max=nums[j+1];
                for(int m=j+1;m<=i;++m)
                    if(nums[i]>max)
                        max=nums[i];
            }
            res.push_back(max);
        }
        return res;
    }
};
int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
