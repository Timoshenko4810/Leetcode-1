#include <iostream>
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};
class Solution {
public:
    bool hasPathSum(TreeNode* root, int sum) {
         if(root == nullptr) return false;
         if(root->left==nullptr&&root->right==nullptr)
             return root->val==sum;
         return dfs(root->left, sum, root->val)||dfs(root->right, sum, root->val);
    }
    bool dfs(TreeNode *root, int sum, int cur){
        if(root==nullptr) return false;
        if(root->left==nullptr&&root->right==nullptr)
            return cur+root->val==sum;
        return dfs(root->left, sum, cur+root->val)||dfs(root->right, sum, cur+root->val);
    }

};
int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
