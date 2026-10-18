class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n=nums.size();
        int i=0,j=0;
        long long blyatt=0,ans=LLONG_MIN;
        while(j<n){
            blyatt+=nums[j];
            if(j-i+1<k) j++;
            else if(j-i+1==k){
                ans=max(ans,blyatt);
                blyatt-=nums[i];
                i++;
                j++;
            }
        }
        return double(ans)/k;
    }
};