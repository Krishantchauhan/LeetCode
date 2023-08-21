class Solution {
public:
    string frequencySort(string s) {
        priority_queue<pair<int,char>>pq;
        map<char,int>mp;

        for(auto ch:s){
            mp[ch]++;
        }

        for(auto ch:s){
            pq.push(make_pair(mp[ch],ch));
        }

        string ans="";
        while(!pq.empty()){
            ans+=pq.top().second;
            pq.pop();
        }
        return ans;
    }
};