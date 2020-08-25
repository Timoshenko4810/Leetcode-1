#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> res;
        if(nums.size()==0)
            return res;
        sort(nums.begin(),nums.end());
        int sep=0;
        while(sep<nums.size()&&nums[sep]<0)
            ++sep;
        if(sep==nums.size()) return res;
        if(sep==0){
            if(nums.size()>=3&&nums[0]==0&&nums[1]==0&&nums[2]==0){
                vector<int>temp = {0,0,0};
                res.push_back(temp);
            }
            return res;
        }
        if(nums[sep]==0){
            if(nums[sep+1]==0&&nums[sep+2]==0){
                vector<int> temp = {0,0,0};
                res.push_back(temp);
            }
        }
        int i=0;
        while(i<sep){
            int j=sep, k=nums.size()-1;
            while(j<k){
                int sum = nums[i]+nums[j]+nums[k];
                if(sum==0){
                    vector<int> temp ={nums[i],nums[k],nums[j]};
                    res.push_back(temp);
                    int j1=j,k1=k;
                    ++j;
                    --k;
                    while(j<k&&nums[j]==nums[j1])
                       ++j;
                    while(j<k&&nums[k]==nums[k1])
                        --k;
                }
                else if(sum<0)
                    ++j;
                else --k;
            }
            int temp=nums[i];
            ++i;
            while(i<sep&&nums[i]==temp)
                ++i;
        }
        while(i<nums.size()){
            int j=0, k = sep-1;
            while(j<k){
                int sum = nums[i]+nums[j]+nums[k];
                if(sum==0){
                    vector<int> temp ={nums[i],nums[k],nums[j]};
                    res.push_back(temp);
                    int j1=j,k1=k;
                    ++j;
                    --k;
                    while(j<k&&nums[j]==nums[j1])
                        ++j;
                    while(j<k&&nums[k]==nums[k1])
                        --k;
                }
                else if(sum<0)
                    ++j;
                else --k;
            }
            int temp=nums[i];
            ++i;
            while(i<nums.size()&&nums[i]==temp)
                ++i;
        }
        return res;
    }
};
int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
[-1,0,1,2,-1,-4]
[-4,-2,-1]
[-4,-2,1,-5,-4,-4,4,-2,0,4,0,-2,3,1,-5,0]
[-4,-2,-2,-2,0,1,2,2,2,3,3,4,4,6,6]
[]
[0]
[0,0,0]