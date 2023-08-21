class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        priority_queue<pair<int,int>>pq;
        int n=score.size();
        for(int i=0;i<n;i++){
            pq.push({score[i],i});
        }

        vector<string>ans(n);
        int ct=1;

        while(!pq.empty()){
            int idx=pq.top().second;
            pq.pop();

            if(ct==1 ){
                ans[idx]="Gold Medal";
            }
            else if(ct==2 ){
                ans[idx]="Silver Medal";
            }
            else if(ct==3 ){
                ans[idx]="Bronze Medal";
            }
            else{
                ans[idx]=to_string(ct);
            }
            ct++;
        }
        return ans;
    }
};