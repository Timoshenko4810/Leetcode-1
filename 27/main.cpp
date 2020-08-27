#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int len=0;
        int index=0;
        for(int i=0;i<nums.size();++i){
            if(nums[i]==val){
                while(i<nums.size()&&nums[i]==val)
                    ++i;
                if(i==nums.size())
                    break;
            }
            nums[index]=nums[i];
            ++len;
            index++;
        }
        return len;
    }
};
int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
