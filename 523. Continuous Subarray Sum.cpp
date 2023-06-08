class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        int sum=0;
        unordered_map<int,int>mp;
        mp[0]=-1;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            sum%=k;
            if(mp.find(sum)!=mp.end() && i-mp[sum]>=2)
                return true;  
            if(mp.find(sum)==mp.end())
             mp[sum]=i;
        }
        return false;
    }
};