#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
class Solution {
public:
    bool PredictTheWinner(vector<int>& nums) {
        return maxscore(0, nums.size()-1, nums, 1)>=0;
    }
    int maxscore(int start, int end, vector<int>& nums, int turn){
        if(start==end) return nums[end]*turn;
        int scorestart=maxscore(start+1, end, nums, -turn)+nums[start]*turn;
        int scoreend=maxscore(start, end-1, nums, -turn)+nums[end]=turn;
        return max(scorestart, scoreend);
    }
};


class Solution_dp {
public:
    bool PredictTheWinner(vector<int>& nums) {
        int length = nums.size();
        auto dp = vector<int>(length);
        for (int i = 0; i < length; i++) {
            dp[i] = nums[i];
        }
        for (int i = length - 2; i >= 0; i--) {
            for (int j = i + 1; j < length; j++) {
                dp[j] = max(nums[i] - dp[j], nums[j] - dp[j - 1]);
            }
        }
        return dp[length - 1] >= 0;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
