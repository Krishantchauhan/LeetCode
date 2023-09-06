class Solution {
public:
    int scoreOfParentheses(string s) {
        int ct=0;
        stack<int>st;

        for(int i=0;i<s.length();i++){
            if(s[i]=='('){
                st.push(ct);
                ct=0;
            }
            else {
                ct=st.top()+max(2*ct,1);
                st.pop();
            }
            // else if
        }
        return ct;
    }
};