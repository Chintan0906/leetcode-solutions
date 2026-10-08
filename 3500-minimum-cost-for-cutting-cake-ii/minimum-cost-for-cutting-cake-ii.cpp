class Solution {
public:
    long long minimumCost(int m, int n, vector<int>& horizontalCut, vector<int>& verticalCut) {
        sort(horizontalCut.begin(),horizontalCut.end());
        sort(verticalCut.begin(),verticalCut.end());
        int i=horizontalCut.size()-1,j=verticalCut.size()-1;
        int vc=1,hc=1;
        long long ans=0;
        while(i>=0 && j>=0){
            if(horizontalCut[i]>=verticalCut[j]){
                ans+=1LL*horizontalCut[i]*vc;
                hc++;
                i--;
            }
            else{
                ans+=1LL*verticalCut[j]*hc;
                vc++;
                j--;
            }
        }
        while(i>=0){
            ans+=1LL*horizontalCut[i]*vc;
            hc++;
            i--;
        }
        while(j>=0){
            ans+=1LL*verticalCut[j]*hc;
            vc++;
            j--;
        }
        return ans;
    }
};