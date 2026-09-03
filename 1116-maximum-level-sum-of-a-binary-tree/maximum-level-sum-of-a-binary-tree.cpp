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
    int maxLevelSum(TreeNode* root) {
        if(!root) return 0;
        int currS=0,maxS=INT_MIN;
        int level=1,maxLevel=1;
        queue<TreeNode*>q;
        q.push(root);
        q.push(NULL);
        while(!q.empty()){
            TreeNode*t=q.front();
            q.pop();
            if(t==NULL){
                if(currS>maxS){
                    maxS=currS;
                    maxLevel=level;
                }
                currS=0;
                level++;
                if(!q.empty()) q.push(NULL);
            }
            else{
                currS+=t->val;
                if(t->left) q.push(t->left);
                if(t->right) q.push(t->right);
            }
        }
        return maxLevel;
    }
};