/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
   int height(TreeNode*root){
    if(root==NULL){
        return 0;
    }
    int LHeight=height(root->left);
    int RHeight=height(root->right);


    return 1+max(LHeight,RHeight);

   }

bool isBalanced(TreeNode*root){
    if(root==NULL){
        return true;
    }


    int p=height(root->left)-height(root->right);

   if(abs(p)>1){
    return false;
   
   }
    return isBalanced(root->left) && isBalanced(root->right);

}
};

