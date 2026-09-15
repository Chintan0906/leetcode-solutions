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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        if(!root) return {};
        vector<vector<int>>ans;
        bool rev=true;
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty()){
            int n=q.size();
            vector<int>level;
            for(int i=0;i<n;i++){
                TreeNode*t=q.front();
                q.pop();
                if(rev) level.push_back(t->val);
                else level.insert(level.begin(),t->val);
                if (t->left)
                    q.push(t->left);

                if (t->right)
                    q.push(t->right);
            }
            ans.push_back(level);
            rev=!rev;
        }
        return ans;
    }
};