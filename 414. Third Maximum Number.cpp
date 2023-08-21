class Solution {
public:
    int thirdMax(vector<int>& nums) {
        int count=1,mx;
        sort(nums.begin(),nums.end(),greater());
        mx=nums[0];

        for(int i=0;i<nums.size();i++){
            if(mx>nums[i]){
                count++;
                mx=nums[i];
                if(count==3)
                    break;
            }
        }

        if(count<3){
            return nums[0];
        }
        return mx;
    }
};