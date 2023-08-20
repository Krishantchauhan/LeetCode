class Solution {
public:
    char findTheDifference(string s, string t) {
        // map<char,int>mp;
        // for(int i=0;i<s.size();i++){
        //     mp[s[i]]++;
        // }

        // for(int i=0;i<t.size();i++){
        //     mp[t[i]]--;
        //     if(mp[t[i]]<0)
        //         return t[i];
        // }
        // return t.size();

        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        char temp;
        int i=0;
        while(i<s.size() || i<t.size()){
            if(s[i]==t[i]){
                i++;
            }
            else{
                return t[i];
            }
        }
        return temp;
        
    }
};