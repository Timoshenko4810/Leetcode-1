#include <iostream>
using namespace std;
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};
class Solution {
public:
    int goodNodes(TreeNode* root) {
        if(root==nullptr)
             return 0;
        int count =1;
        int max=root->val;
        dfs(root->left, max, count);
        dfs(root->right, max, count);
        return count;
    }
    void dfs(TreeNode* root, int max, int &count){
        if(root==nullptr)
            return;
        if(max<=root->val){
            count ++;
            max=root->val;
        }
        dfs(root->left, max, count);
        dfs(root->right, max, count);
    }
};
int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
