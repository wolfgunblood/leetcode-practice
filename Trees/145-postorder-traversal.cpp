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
    vector<int> postorderTraversal(TreeNode* root) {
         vector<int> result;

        dfs(root,result);

        return result;
    }
private:
    void dfs(TreeNode* root,vector<int> &result){
        
        if(root == NULL) return ;
        dfs(root->left,result);
        dfs(root->right,result);
        cout<<root->val<<" ";
        result.push_back(root->val);
    }
    
};