class Solution {
public:
    int minAddToMakeValid(string s) {
        int balance=0;
        int unbalance=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='(') balance++;
            if(s[i]==')') balance--;
            if(balance<0){
                unbalance++;
                balance=0;
            }
        }
        return balance+unbalance;
    }
};