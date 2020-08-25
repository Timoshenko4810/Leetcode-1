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
    bool isSubtree(TreeNode* s, TreeNode* t) {
        if(s==nullptr&&t!=nullptr)
            return false;
        if(s!=nullptr&&t==nullptr)
            return false;
        if(s==nullptr)
            return true;
        return judge(s, t)||isSubtree(s->left, t)||isSubtree(s->right, t);
    }
    bool judge(TreeNode *s, TreeNode *t){
        if(s==nullptr&&t!=nullptr)
            return false;
        if(s!=nullptr&&t==nullptr)
            return false;
        if(s == nullptr)
            return true;
        if(s->val==t->val)
            return judge(s->left, t->left)&&judge(s->right, t->right);
        else return false;
    }
};
int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
