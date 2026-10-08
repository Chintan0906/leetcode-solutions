class Solution {
public:
    int minimumCost(int m, int n, vector<int>& horizontalCut, vector<int>& verticalCut) {
        sort(horizontalCut.rbegin(),horizontalCut.rend());
        sort(verticalCut.rbegin(),verticalCut.rend());
        int i=0,j=0;
        int hc=1,vc=1;
        int ans=0;
        while(i<horizontalCut.size() && j<verticalCut.size()){
            if(horizontalCut[i]>=verticalCut[j]){
                ans+=horizontalCut[i]*vc;
                hc++;
                i++;
            }
            else{
                ans+=verticalCut[j]*hc;
                vc++;
                j++;
            }
        }
        while(i<horizontalCut.size()){
            ans+=horizontalCut[i]*vc;
            hc++;
            i++;
        }
        while(j<verticalCut.size()){
            ans+=verticalCut[j]*hc;
            vc++;
            j++;
        }
        return ans;
    }
};