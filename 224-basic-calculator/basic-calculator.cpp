class Solution {
public:
    int calculate(string s) {
        int n=s.size();
        stack<int>st;
        long long res=0;
        long long num=0;
        int sign=1;
        for(int i=0;i<n;i++){
            char c=s[i];
            if(isdigit(c)) num=num*10+(c-'0');
            else if(c=='+'){
                res+=sign*num;
                num=0;
                sign=1;
            }
            else if(c=='-'){
                res+=sign*num;
                num=0;
                sign=-1;
            }
            else if(c=='('){
                st.push(res);
                st.push(sign);
                num=0;
                res=0;
                sign=1;
            }
            else if(c==')'){
                res+=num*sign;
                num=0;
                res*=st.top();
                st.pop();
                res+=st.top();
                st.pop();
            }
        }
        res+=sign*num;
        return (int)res;
    }
};