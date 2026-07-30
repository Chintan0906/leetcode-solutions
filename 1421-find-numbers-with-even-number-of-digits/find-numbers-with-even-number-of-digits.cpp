class Solution {
public:
    int digits(int n){
        int cnt=0;
        while(n>0){
            cnt++;
            n=n/10;
        }
        return cnt;
    }
    int findNumbers(vector<int>& nums) {
        int ans=0;
        for(int i:nums){
            if(digits(i)%2==0) ans++;
        }
        return ans;
    }
};