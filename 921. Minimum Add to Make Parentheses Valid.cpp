class Solution {
public:
    int minAddToMakeValid(string s) {
        stack<char>st;
        int count=0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='(')
                st.push(')');
            else{
                if(!st.empty() && st.top() ==s[i])
                    st.pop();
                else
                    count++;
            }    
        }
        int a=count+st.size();
        return a;
    }
};