/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    int pathSum(TreeNode* root, int sum) {
        if(root==NULL)
            return 0;
        return dfs(root,sum)+pathSum(root->left,sum)+pathSum(root->right,sum);
    }
    int dfs(TreeNode* root,int sum) {
        int result=0;
        if(root==NULL)
            return 0;
        if(root->val==sum)
            result++;
        result+=(dfs(root->left,sum-root->val)+dfs(root->right,sum-root->val));
        return result;
    }
};