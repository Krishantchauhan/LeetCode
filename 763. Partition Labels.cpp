class Solution {
public:
    vector<int> partitionLabels(string s) {
        unordered_map<char,int>mp;
        vector<int>ans;

        for(int i=0;i<s.size();i++)
            mp[s[i]]=i;
        
        int j=0,low=0;
        for(int i=0;i<s.size();i++){
            j=max(j,mp[s[i]]);
            if(j==i){
                ans.push_back(i-low+1);
                low=i+1;
            }
        }
        return ans;
    }
};