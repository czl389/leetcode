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
    vector<string> binaryTreePaths(TreeNode* root) {
        if(root==NULL)
            return {};
        string str;
        vector<string> result;
        str.append(to_string(root->val));
        makePath(root,str,result);
        return result;
    }
    void makePath(TreeNode* node,string str,vector<string>& result) {
        if(node->left==NULL&&node->right==NULL) {
            result.push_back(str);
        }
        if(node->left!=NULL) {
            string str1=str;
            str1.append("->");
            str1.append(to_string(node->left->val));
            makePath(node->left,str1,result);
        }
        if(node->right!=NULL) {
            string str2=str;
            str2.append("->");
            str2.append(to_string(node->right->val));
            makePath(node->right,str2,result);
        }
    }
};