class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int n=nums.size();
        vector<int>ans;
        int s=0;
        for(int i=0;i<n;i++){
            s+=nums[i];
            ans.push_back(s);
        }
        return ans;
    }
};