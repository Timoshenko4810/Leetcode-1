#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;
class Solution {
public:
    vector<vector<int>> pairSums(vector<int>& nums, int target) {
        vector<vector<int>> res;
        unordered_map<int,int> map;
        for(int i:nums)
            map.insert(make_pair(i,i));
        sort(nums.begin(),nums.end());
        for(int i=0;nums[i]<=target/2;++i){
            if(2*nums[i]==target){
                int count=map.count(nums[i]);
                vector<int>temp = {map[nums[i]],map[nums[i]]};
                for(int j=0;j<count/2;++j)
                    res.push_back(temp);
            }
            if(map.find(target-nums[i])!=map.end()){
                int count1=map.bucket_size(nums[i]);
                int count2=map.bucket_size(target-nums[i]);
                vector<int> temp={nums[i], target-nums[i]};
                if(count1>count2)
                    for(int j=0;j<count2;++j)
                        res.push_back(temp);
                else for(int j=0;j<count1;++j)
                    res.push_back(temp);
            }
        }
        return res;
    }
};
int a(int s)
int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
