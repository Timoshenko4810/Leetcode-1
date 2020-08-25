#include <iostream>
using namespace std;
struct TreeNode {
         int val;
         TreeNode *left;
         TreeNode *right;
         TreeNode(int x) : val(x), left(NULL), right(NULL) {}
     };
class Solution {
public:
    bool isBalanced(TreeNode* root) {
        if(root==nullptr) return true;
        if(abs(gethigh(root->left)-gethigh(root->right))>1)
            return false;
        return (isBalanced(root->right) && isBalanced(root->left));
    }
    int gethigh(TreeNode* root){
        if(root==nullptr) return 0;
        int leftheight = gethigh(root->left);
        int rightheight = gethigh(root->right);
        return leftheight>rightheight?leftheight+1:rightheight+1;
    }
};
