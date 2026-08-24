class Solution {
public:
    int heightChecker(vector<int>& heights) {
        int n=heights.size();
        int cnt=0;
        vector<int>a1(n);
        for(int i=0;i<n;i++){
            a1[i]=heights[i];
        }
        sort(a1.begin(),a1.end());
        for(int i=0;i<n;i++){
            if(heights[i]!=a1[i]) cnt++;
        }
        return cnt;
    }
};