#include <iostream>
#include <vector>
using namespace std;
class Solution {
private:
    vector<string> alpha={
            "abc",
            "def",
            "ghi",
            "jkl",
            "mno",
            "pqrs",
            "tuv",
            "wxyz",
    };
public:
    vector<string> letterCombinations(string digits) {
        vector<string> res;
        string temp;
        dfs(digits, res, temp, 0);
        return res;
    }
    void dfs(string digits, vector<string> &res, string &temp, int index){ //digits为输入序列，res为结果，temp为当前序列
        if(index>=digits.size()) {
            if(temp.size()>0)
                res.push_back(temp);
            return;
        }
        int t = digits[index]-'0'-2;
        string s = alpha[t];
        for(auto i : s){
            temp.push_back(i);
            dfs(digits, res, temp, index+1);
            temp.pop_back();
        }
    }
};
int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
