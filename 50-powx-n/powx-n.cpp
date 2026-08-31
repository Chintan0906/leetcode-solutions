class Solution {
public:
    double solve(double x,long long n){
        if(n==0) return 1;
        double half=solve(x,n/2);
        double ans=half*half;
        if(n%2==1) return x*ans;
        return ans;
    }
    double myPow(double x, int n) {
        long long N=n;
        if(N<0){
            x=1/x;
            N=-N;
        }
        return solve(x,N);
    }
};