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
    int minDepth(TreeNode* root) {
        int minDepth=0;
        if(root==NULL)
            return 0;
        //递归，时间复杂度为o(n),n为结点个数。
        //一开始，想如果第一次找到了叶子就返回，不再搜索。但我无法控制最先找到的即是最短的，只得作罢。
        beLeaf(root,1,minDepth);
        return minDepth;
    }
    void beLeaf(TreeNode* node,int depth,int& minDepth) {
            if(node->left==NULL&&node->right==NULL) {
                if(depth<minDepth||minDepth==0)
                    minDepth=depth;
            }
            else if(node->left!=NULL&&node->right==NULL)
                beLeaf(node->left,depth+1,minDepth);
            else if(node->left==NULL&&node->right!=NULL)
                beLeaf(node->right,depth+1,minDepth);
            else {
                beLeaf(node->left,depth+1,minDepth);
                beLeaf(node->right,depth+1,minDepth);
            }
                
    }
};