class Solution {
public:

    int garbageCollection(vector<string>& garbage, vector<int>& travel) {
        int ctG=0,ctM=0,ctP=0,ans=0;
        int lG=0,lM=0,lP=0,n=travel.size();

        vector<long long>prefix(n+1);
        prefix.push_back(0);

        for(int i=1;i<=n;i++)
            prefix[i]=prefix[i-1]+travel[i-1];
        
        for(int i=0;i<garbage.size();i++){
            string s=garbage[i];
            for(auto ch:s){
                if(ch=='M'){
                    ctM++;
                    lM=i;
                }
                if(ch=='P'){
                    ctP++;
                    lP=i;
                }
                if(ch=='G'){
                    ctG++;
                    lG=i;
                }
            }
        }
        
        ans+=ctM+prefix[lM];
        ans+=ctP+prefix[lP];
        ans+=ctG+prefix[lG];

        return ans;
    }
};