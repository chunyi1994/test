#ifndef 144_BINARY_TREE_PREORDER_TRAVERSAL
#define 144_BINARY_TREE_PREORDER_TRAVERSAL
#include<vector>
using namespace std;
void preOrder(TreeNode *node, vector<int>& gVector){
    if(!node){
        return;
    }

    gVector.push_back(node->val);
    preOrder(node->left, gVector);
    preOrder(node->right, gVector);
}

class Solution {
public:
   vector<int> preorderTraversal(TreeNode* root) {
       vector<int> gVector;
       preOrder(root, gVector);
       return gVector;
   }
};
#endif // 144_BINARY_TREE_PREORDER_TRAVERSAL

