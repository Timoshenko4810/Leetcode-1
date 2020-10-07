class Solution {
public:
	void sortColors(vector<int>& nums) {
		int u1(-1), u2(-1);//u1及左边的数都小于1，u2及左边的数都小于2
		for(int i = 0; i<nums.size(); ++i){
			if(nums[i]<2){
				u2++;
				swap(nums, i, u2);
				if(nums[u2]<1){
					u1++;
					swap(nums, u2, u1);
				}
			}
		}
	}
	void swap(vector<int>& nums, int p, int l){
		int temp = nums[p];
		nums[p] = nums[l];
		nums[l] = temp;
		return;
	}
};