class Solution {
public:
	vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
		vector<vector<int>> res;
        if(candidates.size() == 0) return res;
		vector<int> vec;
		for(int i = 0; i < candidates.size(); ++i){
			if(candidates[i] <= target){
				vec.push_back(candidates[i]);
				dfs(res, candidates, vec, i, target, candidates[i]);
				vec.pop_back();
			}
		}
		return res;
	}

	void dfs(vector<vector<int>>& res, vector<int>& candidates, vector<int>& vec, int i, int target, int sum){
		if(sum == target) {res.push_back(vec); return;}
		for(int j = i; j < candidates.size(); ++j){
			if((sum + candidates[j]) <= target){
				vec.push_back(candidates[j]);
				dfs(res, candidates, vec, j, target, sum + candidates[j]);
				vec.pop_back();
			}
		}
	}
};