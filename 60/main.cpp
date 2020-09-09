class Solution {
public:
	string getPermutation(int n, int k) {
		vector<int> nums;
		string res;
		for(int i = 1; i <= n; ++i) nums.push_back(i);
		for(int i = 1; i <= n; ++i){
			int a, b;
			b = InWhichNum(GetFactorial(n-i), k);
			res = res+to_string(nums[b]);
			k = InWhichPosition(GetFactorial(n-i), k);
			DeleteN(b, nums);
		}
		return res;
	}

	void DeleteN(int n, vector<int> &vec){
		if(vec.size() == 1) return;
		if(n != vec.size()-1){
			for(int i = n+1; i<vec.size(); ++i){
				vec[i-1] = vec[i];
			}
		}
		vec.pop_back();
	}
	int GetFactorial(int n){
		if(n == 0) return 1;
		int res = 1;
		for(int i = 1; i <= n; ++i) res*=i;
		return res;
	}
	int InWhichNum(int k, int n){
		if(n == 0) return 0;
		if(n%k == 0) return n/k-1;
		return n/k;
	}
	int InWhichPosition(int k, int n){
		if(n%k == 0) return k;
		return n%k;
	}
};