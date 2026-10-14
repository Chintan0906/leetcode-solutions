class Solution {
public:
    string maxSumOfSquares(int num, int sum) {
        if(sum>9*num) return "";
        string ans="";
        while(num--){
            int dig=min(9,sum);
            ans+=to_string(dig);
            sum-=dig;
        }
        return ans;
    }
};