class Solution {
public:
    bool findSubarrays(vector<int>& nums) {
        unordered_set<int>st;
        for(int i=0;i<nums.size()-1;i++){
            int s=nums[i]+nums[i+1];
            if(st.count(s)) return true;
            st.insert(s);
        }
        return false;
    }
};