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
    bool isBalanced(TreeNode* root) {
        return isHeightBalanced(root);
        
    }
    bool isHeightBalanced(TreeNode* root) {
        if(root==NULL)
            return true;
        if(abs(getHeight(root->left)-getHeight(root->right))<2)
            return isHeightBalanced(root->left)&&isHeightBalanced(root->right);
        return false;
    }
    int getHeight(TreeNode* node) {
        if(node==NULL) {
            return 0;
        }
        //得出的教训：下面的语句不可以简化为如下语句
        //return getHeight(node->left)>=getHeight(node->right)?getHeight(node->left)+1:getHeight(node->right)+1;
        //因为如果按上面写，递归函数会调用4次，导致time limit exceed
        int leftHeight=getHeight(node->left);
        int rightHeight=getHeight(node->right);
        return leftHeight>=rightHeight?leftHeight+1:rightHeight+1;
    }
};