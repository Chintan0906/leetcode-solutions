class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        int n=nums.size();
        map<int,int>m;
        int i=0;
        int len=0;
        for(int j=0;j<n;j++){
            m[nums[j]]++;
            while(m[nums[j]]>k){
                m[nums[i]]--;
                i++;
            }
            len=max(len,j-i+1);
        }
        return len;
    }
};