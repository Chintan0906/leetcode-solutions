class Solution {
public:
    int lowerBound(vector<int>&a,int x){
        int n=a.size();
        int l=0,h=n-1;
        int ans=n;
        while(l<=h){
            int mid=l+(h-l)/2;
            if(a[mid]>=x){
                ans=mid;
                h=mid-1;
            }
            else l=mid+1;
        }
        return ans;
    }
    int upperBound(vector<int>&a,int x){
        int n=a.size();
        int l=0,h=n-1;
        int ans=n;
        while(l<=h){
            int mid=l+(h-l)/2;
            if(a[mid]>x){
                ans=mid;
                h=mid-1;
            }
            else l=mid+1;
        }
        return ans;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        int n=nums.size();
        int lb=lowerBound(nums,target);
        if(lb==n || nums[lb]!=target) return {-1,-1};
        return {lb,upperBound(nums,target)-1};
    }
};