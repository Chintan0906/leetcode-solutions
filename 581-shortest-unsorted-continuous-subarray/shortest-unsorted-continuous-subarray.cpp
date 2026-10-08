class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        vector<int>arr=nums;
        sort(arr.begin(),arr.end());
        int n=nums.size();
        int l=0;
        while(l<n && nums[l]==arr[l]){
            l++;
        }
        if(l==n) return 0;
        int r=n-1;
        while(r>=0 && nums[r]==arr[r]) r--;
        return r-l+1; 
    }
};