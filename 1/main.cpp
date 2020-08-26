#include <iostream>
#include <vector>
#include <map>
using namespace std;
//使用哈希解法，其中Map中的键值对不能重复，出现的一个问题就是如何解决两个相同的数字之和等于target
/*在第一种解法两边哈希中，在向Map中插入nums[i]时，靠后的相同键值对会覆盖靠前的键值对，而在第二遍哈希遍历时只需检测下标与map
中target-nums[i]所对应的下标是否相同，如果不相同则说明序列中出现了一个以上的相同值，且其和为target
 */
/*而在第二种解法中更加容易，因为在每次向map中插入数据之前都会先检查有无符合要求的键值存在，因此很好的解决了这个问题*/
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int, int> temp;
        for(int i=0;i<nums.size();++i){
            temp.insert(make_pair(nums[i], i));
        }
        vector<int> res;
        for(int i=0;i<nums.size();++i){
            if(temp.count(target-nums[i])>0&&temp[target-nums[i]]!=i) {
                res.push_back(i);
                res.push_back(temp[target-nums[i]]);
            }
        }
        return res;
    }
};
class Solution1 {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int, int> temp;
        vector<int> res;
        for(int i=0;i<nums.size();++i){
            temp.insert(make_pair(nums[i], i));
            if(temp.count(target-nums[i])>0&&temp[target-nums[i]]!=i){
                res.push_back(i);
                res.push_back(temp[target-nums[i]]);
                break;
            }
        }
        return res;
    }
};
int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
