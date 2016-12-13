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
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        vector<vector<int>> result;
        level_traversal(root,result,0);
        reverse(result.begin(),result.end());
        return result;
    }
    void level_traversal(TreeNode* node,vector<vector<int>>& result,int level) {
        if(node!=NULL) {
            //下面的判断是为了，能够用下标访问vector
            if(level>=result.size()) {
                vector<int> temp;
                result.push_back(temp);
            }
            result[level].push_back(node->val);
            level_traversal(node->left,result,level+1);
            level_traversal(node->right,result,level+1);
        }
    }
    
};