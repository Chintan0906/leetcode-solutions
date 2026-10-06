class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int n=nums.size();
        int maxi=nums[0];
        int ans=0;
        for(int i=1;i<n;i++){
            if(nums[i]>maxi){
                maxi=nums[i];
                ans=i;
            }
        }
        for(int i=0;i<n;i++){
            if(i!=ans && nums[ans]<2*nums[i]) return -1;
        }
        return ans;
    }
};