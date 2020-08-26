#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int low = 0, high=nums.size();
        while(low<nums.size()&&low<high){
            int mid = (low+high)/2;
            if(target==nums[mid])
                return mid;
            if(target<nums[mid])
                high=mid;
            else low=mid+1;
        }
        return low;
    }
};
int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
