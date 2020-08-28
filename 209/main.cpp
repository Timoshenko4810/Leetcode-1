#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    int minSubArrayLen(int s, vector<int>& nums) {
        int len=nums.size();
        int sum=0;
        int index=0;
        int i=0;
        bool flag=false;
        while(i<=nums.size()){
            if(sum>=s){
                flag=true;
                i-index<len?len=i-index:len=len;
                sum-=nums[index];
                ++index;
            }
            else{
                if(i==nums.size())
                    break;
                sum+=nums[i];
                ++i;
            }
        }
        if(!flag) return 0;
        return len;
    }
};
int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
