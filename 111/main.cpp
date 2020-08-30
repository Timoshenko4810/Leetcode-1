#include <iostream>
#include <vector>
#include <algorithm>
//#include <cmath>
using namespace std;
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};
class Solution {
public:
    int minDepth(TreeNode* root) {
        if(root==nullptr)
            return 0;
        return dfs(root, 0);
    }
    int dfs(TreeNode *root, int height){
        if(root==nullptr)
            return height;
        if(root->left==nullptr&&root->right==nullptr)
            return height+1;
        if(root->left==nullptr)
            return dfs(root->right, height+1);
        if(root->right==nullptr)
            return dfs(root->left, height+1);
        return min(dfs(root->left, height+1), dfs(root->right, height+1));
    }
};
class Solution1{
public:
    int minDepth(TreeNode *root){
        if(root==nullptr) return 0;
        if(root->left==nullptr) return minDepth(root->right)+1;
        if(root->right==nullptr) return minDepth(root->left)+1;
        return min(minDepth(root->left),minDepth(root->right))+1;
    }
};
int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
