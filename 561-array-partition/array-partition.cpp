class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int s=0;
        int n=nums.size();
        for(int i=0;i<n;i+=2){
            s+=nums[i];
        }
        return s;
    }
};