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
unordered_set<int> s;
    bool findTarget(TreeNode* root, int k) {
        
           vector<int> ans;

        if(root == NULL)
            return false;

        queue<TreeNode*> q;
        q.push(root);

        while(!q.empty()) {

            TreeNode* temp = q.front();
            q.pop();

            ans.push_back(temp->val);

            if(temp->left != NULL)
                q.push(temp->left);

            if(temp->right != NULL)
                q.push(temp->right);
        }


        for(int i=0;i<ans.size();i++){
            for(int j=i+1;j<ans.size();j++){
                if(ans[i]+ans[j]==k){
                    return true;
                }
            }
        }
        return false;
    }
};