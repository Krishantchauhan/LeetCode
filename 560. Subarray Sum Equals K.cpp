class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {

        map<int,int>mp;
        mp[0]=1;
        int sum=0,ct=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            int diff=sum-k;
            if(mp.find(diff)!=mp.end())
                ct+=mp[diff];
            
            mp[sum]++;
        }
        return ct;
    }
};