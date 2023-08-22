class Solution {
public:
    struct cmp{
        bool operator()(const pair<int,string> a,const pair<int,string> b){
            if(a.first < b.first || (a.first == b.first) && (a.second > b.second)){
                return true;
            }

            return false;
        }
    };
    vector<string> topKFrequent(vector<string>& words, int k) {
        map<string,int>mp;

        for(int i=0;i<words.size();i++){
            mp[words[i]]++;
        }

        vector<string>ans;
        priority_queue<pair<int,string>,vector<pair<int,string>>,cmp>st;
        
        for(auto ch:mp){
            st.push({ch.second,ch.first});
            // cout<<st.top().first<<" ";
            // if(st.size()>k)
            //     st.pop();
        }
        // cout<<st.size();

        while(k--){
            ans.push_back(st.top().second);
            st.pop();
            cout<<st.top().second<<" ";
        }
        return ans;
    }
};