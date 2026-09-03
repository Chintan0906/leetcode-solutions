class Solution {
public:
    long long subArrayRanges(vector<int>& nums) {
        int n=nums.size();
        int long long ans=0;
        for(int i=0;i<n;i++){
            int mnS=nums[i];
            int mxS=nums[i];
            for(int j=i;j<n;j++){
                mnS=min(mnS,nums[j]);
                mxS=max(mxS,nums[j]);
                ans+=mxS-mnS;
            }
        }
        return ans;
    }
};