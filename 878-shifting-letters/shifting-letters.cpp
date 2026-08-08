class Solution {
public:
    string shiftingLetters(string s, vector<int>& shifts) {
        string ans;
        int x=0;
        for(int s1:shifts) x=(x+s1)%26;
        for(int i=0;i<s.size();i++){
            int idx=s[i]-'a';
            ans.push_back(char((idx+x)%26+'a'));
            x=((x-shifts[i])%26+26)%26;
        }
        return ans;
    }
};