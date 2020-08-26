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
    int pathSum(TreeNode* root, int sum) {
        int count = 0;
        if(root==nullptr) return 0;
        pathSum1(root, sum, 0, count);
        return count;
    }
    void pathSum1(TreeNode *root, int sum, int cursum,int &count){
        if(root==nullptr) return;
        judge(root, sum, 0, count);
        pathSum1(root->left, sum, 0, count);
        pathSum1(root->right, sum, 0, count);
    }
    void judge(TreeNode *root, int sum, int cursum, int &count){
        if(root==nullptr)
            return;
        cursum+=root->val;
        if(cursum==sum)
            ++count;
        judge(root->left, sum, cursum, count);
        judge(root->right, sum, cursum, count);
    }
};
int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
