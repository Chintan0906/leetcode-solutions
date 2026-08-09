class Solution {
public:
    bool isSelfDividing(int n){
        int t=n;
        while(t>0){
            int d=t%10;
            if(d==0 || n%d!=0) return false;
            t/=10;
        }
        return true;
    }
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int>ans;
        for(int i=left;i<=right;i++){
            if(isSelfDividing(i)) ans.push_back(i);
        }
        return ans;
    }
};