#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        int temp=0;
        for(int i : nums)
            temp^=i;
        int k =temp&(-temp);
        vector<int> res(2,0);
        for(int i:nums)
            if(i&k)
                res[0]^=i;
            else
                res[1]^=i;
        return res;    

    }
};
int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
