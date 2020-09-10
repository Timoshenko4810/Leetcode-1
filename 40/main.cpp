class Solution {
public:
	vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
		quickSort(candidates, 0, candidates.size()-1);
		vector<vector<int>> res;
		if(candidates.size() == 0) return res;
		vector<int> vec;
		for(int i = 0; i < candidates.size(); ++i){
			if(candidates[i] <= target){
				if(i > 0){
					if(candidates[i] == candidates[i-1]) continue;
				}
				vec.push_back(candidates[i]);
				dfs(res, candidates, vec, i+1, target, candidates[i]);
				vec.pop_back();
			}
		}
		return res;
	}

	void dfs(vector<vector<int>>& res, vector<int>& candidates, vector<int>& vec, int i, int target, int sum){
		if(sum == target) {res.push_back(vec); return;}
		for(int j = i; j < candidates.size(); ++j){
			if((sum + candidates[j]) <= target){
				if(j != i && candidates[j] == candidates[j-1]) continue;//保证相同数字只push一个
				vec.push_back(candidates[j]);
				dfs(res, candidates, vec, j+1, target, sum + candidates[j]);
				vec.pop_back();
			}
		}
	}

	void quickSort(vector<int>& array, int left, int right)
	{
		if(left < right)
		{
			int pivot = array[left];
			int low = left, high = right;
			while(low < high)
			{
				while(array[high] >= pivot && low < high)
					high--;
				array[low] = array[high];

				while(array[low] <= pivot && low < high)
					low++;
				array[high] = array[low];
			}
			array[low] = pivot;

			quickSort(array, left, low - 1);
			quickSort(array, low + 1, right);
		}
	}
};