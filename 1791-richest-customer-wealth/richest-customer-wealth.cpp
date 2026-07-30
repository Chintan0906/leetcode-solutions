class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int ans=0;
        for(auto& cust:accounts){
            int s=0;
            for(int money:cust){
                s+=money;
            }
            ans=max(ans,s);
        }
        return ans;
    }
};