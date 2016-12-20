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
    bool isSymmetric(TreeNode* root) {
        if(root!=NULL)
            return pairWiseSymmetric(root->left,root->right);
        else
            return true;
        
    }
    bool pairWiseSymmetric(TreeNode* leftNode,TreeNode* rightNode) {
        if(leftNode!=NULL&&rightNode!=NULL&&leftNode->val==rightNode->val) {
            return pairWiseSymmetric(leftNode->left,rightNode->right)&&pairWiseSymmetric(leftNode->right,rightNode->left);
        }
        else if(leftNode==NULL&&rightNode==NULL) {
            return true;
        }
        else {
            return false;
        }
    }
};