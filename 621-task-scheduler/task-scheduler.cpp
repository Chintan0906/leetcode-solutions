class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        vector<int>freq(26,0);
        for(char c:tasks){
            freq[c-'A']++;
        }
        int maxFreq=0;
        for(int x:freq){
            maxFreq=max(x,maxFreq);
        }
        int cntMax=0;
        for(int x:freq){
            if(x==maxFreq) cntMax++;
        }
        int ans=(maxFreq-1)*(n+1)+cntMax;
        return max((int)tasks.size(),ans);
    }
};