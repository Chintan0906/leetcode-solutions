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
    void inorder(TreeNode*root,vector<int>&arr){
        if(!root) return;
        inorder(root->left,arr);
        arr.push_back(root->val);
        inorder(root->right,arr);
    }
    TreeNode* increasingBST(TreeNode* root) {
        vector<int>a;
        inorder(root,a);
        TreeNode*dummy=new TreeNode(0);
        TreeNode*curr=dummy;
        for(int x:a){
            curr->right=new TreeNode(x);
            curr=curr->right;
        }
        return dummy->right;
    }
};