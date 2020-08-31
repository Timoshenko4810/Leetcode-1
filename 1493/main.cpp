#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int max=0;
        int curlen1=0;
        int curlen2=0;
        int i=nums.size()-1;
        bool flag=false;
        while(i>=0){
            if(nums[i]==1){
                if(curlen2!=0) curlen2++;
                curlen1++;
            }
            else{
                flag=true;
                if(curlen2>max)
                    max=curlen2;
                curlen2=curlen1;
                curlen1=0;
            }
            --i;
        }

        if(curlen2>max)
            max=curlen2;
        else if(curlen2<=max&&curlen1>max)
            flag?max=curlen1:max=curlen1-1;
        return max;
    }
};
int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
