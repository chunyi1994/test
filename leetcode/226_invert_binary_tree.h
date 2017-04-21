#ifndef 226_INVERT_BINARY_TREE_H
#define 226_INVERT_BINARY_TREE_H
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

void InvertTree(TreeNode* node){
    if(!node){
        return;
    }
    TreeNode* temp = node->left;
    node->left = node->right;
    node->right = temp;
    InvertTree( node->left );
    InvertTree( node->right );
}

class Solution226 {
public:
    TreeNode* invertTree(TreeNode* root) {
        InvertTree(root);
        return root;
    }
};

#endif // 226_INVERT_BINARY_TREE_H

