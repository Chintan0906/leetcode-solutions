class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {
        int n=nums.size();
        bool f=true;
        while(f){
            f=false;
            for(int i=0;i<n;i++){
                if(original==nums[i]){
                    original*=2;
                    f=true;
                    break;
                }
            }

        }
        return original;
    }
};