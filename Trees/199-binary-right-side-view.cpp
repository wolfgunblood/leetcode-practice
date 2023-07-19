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
    vector<int> rightSideView(TreeNode* root) {
        
        vector<int> result;

        if(root == NULL){
            return {};
        }

        queue<TreeNode* > q;

        q.push(root);

        while(!q.empty()){

            int count = q.size();
            // vector<int> curr;

            for(int i = count;i>0;i--){

                TreeNode* node =q.front();
                q.pop();
                cout<<node->val;

                if(count == i) 
                {
                result.push_back(node->val);
                }
                if(node->right != NULL) q.push(node->right);
                if(node->left != NULL) q.push(node->left);
            }

        }

        return result;
    }

    
};