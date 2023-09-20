class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        map<int,int>mp;

        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        int k=0;
        for(auto it:mp){
            while(it.second>0){
                nums[k]=it.first;
                k++;
                it.second--;
            }
        }
        return nums;
    }
};