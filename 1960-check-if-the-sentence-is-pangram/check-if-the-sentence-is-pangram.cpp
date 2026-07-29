class Solution {
public:
    bool checkIfPangram(string sentence) {
        int n=sentence.length();
        vector<bool>vis(26,false);
        for(int i=0;i<n;i++){
            if('A'<=sentence[i] && sentence[i]<='Z') vis[sentence[i]-'A']=true;
            else if('a'<=sentence[i] && sentence[i]<='z') vis[sentence[i]-'a']=true;
        }
        for(int i=0;i<26;i++){
            if(!vis[i]) return false;
        }
        return true;
    }
};