class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n=nums.size();
        vector<int>st(n);
        st[0]=nums[0];
        for(int i=1;i<n;i++){
            st[i]=max(nums[i],st[i-1]);
        }
        int mini=INT_MAX;
        for(int i=n-1;i>=0;i--){
            mini=min(nums[i],mini);
            st[i]-=mini;
        }
        for(int i=0;i<n;i++){
            if(st[i]<=k) return i;
        }
        return -1;
    }
};