class Solution {
public:
    string reverseWords(string s) {
        int low=0,high=0;
        while(low<s.size()){
            while(high<s.size() && s[high]!=' ')
                high++;
            reverse(s.begin()+low,s.begin()+high);
            low=high+1;
            high=low;
        }
        return s;
    }
};