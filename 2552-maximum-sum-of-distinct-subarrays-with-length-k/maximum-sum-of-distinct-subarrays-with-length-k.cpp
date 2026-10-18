class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        int n=nums.size();
        int i=0,j=0;
        long long s=0,mS=0;
        unordered_map<int,int>m;

        while(j<n){
            s+=nums[j];
            m[nums[j]]++;
            if(j-i+1<k) j++;
            else if(j-i+1==k){
                if(m.size()==k)
                    mS=max(mS,s);
                s-=nums[i];
                m[nums[i]]--;
                if(m[nums[i]]==0) m.erase(nums[i]);
                i++;
                j++;
            }
        }
        return mS;
    }
};