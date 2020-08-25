#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
using namespace std;
class Solution {
public:
    vector<vector<int>> findSubsequences(vector<int>& nums) {
        vector<int> cur;
        vector<vector<int>> res;
        dfs(res, nums, cur, -1, 0);
        return res;
    }
    bool check(vector<int> &nums, int lastIndex, int curIndex){
        for(int i=lastIndex+1; i<curIndex; ++i){
            if(nums[i]==nums[curIndex])
                return false;
        }
        return true;
    }
    void dfs(vector<vector<int>> &res, vector<int>& nums, vector<int> &cur, int lastIndex, int curIndex){
        if(curIndex>=nums.size()){           //若坐标超出范围
            if(cur.size()>1){
                res.push_back(cur);
            }
            return;
        }
        if(cur.size()==0 || nums[curIndex]>=cur.back()){
            if(check(nums, lastIndex, curIndex)){
                cur.push_back(nums[curIndex]);
                dfs(res, nums, cur, curIndex, curIndex+1);
                cur.pop_back();
            }
        }
        dfs(res, nums, cur, lastIndex, curIndex+1);
    }
};


int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}

