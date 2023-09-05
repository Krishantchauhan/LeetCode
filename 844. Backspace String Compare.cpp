class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char>st1;
        stack<char>st2;

        for(auto it:s){
            if(!st1.empty() && it=='#'){
                st1.pop();
                continue;
            }
            if(it!='#')
                st1.push(it);
        }
        for(auto it:t){
            if(!st2.empty() && it=='#'){
                st2.pop();
                continue;
            }
            if(it!='#')
                st2.push(it);
        }

        string s1,s2;
        while(!st1.empty()){
            // cout<<st1.top();
            s1.push_back(st1.top());
            // cout<<st1.top();
            st1.pop();
        }

        while(!st2.empty()){
            // cout<<st1.top();
            s2.push_back(st2.top());
            cout<<st2.top();
            st2.pop();
        }


        return s1==s2;
    }
};