class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        int n=nums.size();
        vector<vector<int>>ans={{}};
        for(int i:nums){
            int sz=ans.size();
            for(int j=0;j<sz;j++){
                vector<int>t=ans[j];
                t.push_back(i);
                ans.push_back(t);
            }
        }
        return ans;
    }
};