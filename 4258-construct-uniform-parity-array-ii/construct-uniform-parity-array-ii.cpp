class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        int allOdd=INT_MAX;
        int allEven=INT_MAX;
        for(int x:nums1){
            if(x%2==0) allEven=min(allEven,x);
            else allOdd=min(allOdd,x);
        }
        if(allOdd==INT_MAX) return true;
        if(allEven==INT_MAX) return true;
        return allOdd<allEven;
    }
};