class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int maxW=0;
        for(string s:sentences){
            int cnt=1;
            for(char c:s){
                if(c==' ') cnt++;
            }
            maxW=max(maxW,cnt);
        }
        return maxW;
    }
};