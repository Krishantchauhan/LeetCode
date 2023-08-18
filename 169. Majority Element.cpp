class Solution {
public:
    int majorityElement(vector<int>& nums) {
        // map<int,int>mp;

        // for(int i=0;i<nums.size();i++){
        //     mp[nums[i]]++;
        // }

        // int mx=-1,pos=0;
        // for(auto it:mp){
        //     if(mx<it.second){
        //         mx=max(mx,it.second);
        //         pos=it.first;
        //     }
        // }

        // return pos;

        int count = 0;
        int curr;
        for(int n: nums){
            if(count == 0){
                curr = n;
                count++;
            }
            else if(n == curr){
                count++;
            }
            else{
                count--;
            }
        }
        return curr;
    }
};