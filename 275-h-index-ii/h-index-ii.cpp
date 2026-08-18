class Solution {
public:
    int hIndex(vector<int>& citations) {
        int n=citations.size();
        for(int i=0;i<n;i++){
            int pa=n-i;
            if(citations[i]>=pa) return pa;
        }
        return 0;
    }
};