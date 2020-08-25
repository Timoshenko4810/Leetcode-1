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
        if(abs(height(root->left)-height(root->right))>1) return false;
        return isBalanced(root->right)&&isBalanced(root->left);
    }
    int height(TreeNode* root){
        if(root==nullptr) return 0;
        int left = height(root->left);
        int right = height(root->right);
        return left>right?left+1:right+1;
    }
};
int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
