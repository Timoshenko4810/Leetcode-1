#include <iostream>
#include <vector>
using namespace std;
struct TreeNode {
         int val;
         TreeNode *left;
         TreeNode *right;
         TreeNode(int x) : val(x), left(NULL), right(NULL) {}
     };
class Solution {
public:
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int> res1,res2;
        dfs(root1,res1);
        dfs(root2,res2);
        return res1==res2;
    }
    void dfs(TreeNode*root, vector<int> &res){
        if(root==nullptr) return;
        if(root->left==nullptr&&root->right==nullptr) {
            res.push_back(root->val);
            return;
        }
        dfs(root->left,res);
        dfs(root->right,res);
    }
};
int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
