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
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        //从顶向下搜索，第一次出现结点值在p,q结点值之间，则该结点是最小公共祖先；
        //若搜索结点偏小，则搜索右子树，反之搜索左子树
        TreeNode* lca=root;
        int minVal=min(p->val,q->val);
        int maxVal=max(p->val,q->val);
        while(!(lca->val>=minVal&&lca->val<=maxVal))
        {
            if(lca->val<minVal)
                lca=lca->right;
            else if(lca->val>maxVal)
                lca=lca->left;
        }
        return lca;
    }
};