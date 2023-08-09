class Solution {
public:
    bool search(vector<int>& nums, int target) {
        // unordered_map<int,int>mp;

        // for(auto it:nums){
        //     mp[it]++;
        // }

        // if(mp.find(target)!=mp.end())
        //     return true;

        // return false;


        for(int i : nums) {
            if(i == target) return true;
        }
        return false;
    }
};