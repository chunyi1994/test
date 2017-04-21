#ifndef  _104_MAXIMUM_DEPTH_OF_BINARY_TREE
#define _104_MAXIMUM_DEPTH_OF_BINARY_TREE
#include <queue>
using namespace std;

  int gMaxDepth = 0;

 void visit(TreeNode* node, int num){
            if(!node){
                return;
            }

           if(num >gMaxDepth){
               gMaxDepth = num;
           }

           visit(node->left, num + 1);
           visit(node->right, num + 1);

       }

   class Solution104 {
   public:
       int maxDepth(TreeNode* root) {
           visit(root, 1);
           return gMaxDepth;

       }
   };

#endif // 104_MAXIMUM_DEPTH_OF_BINARY_TREE

