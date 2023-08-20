class Solution {
public:
    bool isSubsequence(string s, string t) {
        if(s=="")
            return true;
        int low=0;
        for(int i=0;i<t.length();i++){
            if(t[i]==s[low])
                low++;
            if(low==s.size())
                return true;
        }

        return false;
    }
};