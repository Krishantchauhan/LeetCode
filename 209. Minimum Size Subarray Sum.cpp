class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int sum=0,low=0,n=nums.size();
        int mn=n+1;

        for(int i=0;i<n;i++){
            sum+=nums[i];
            while(sum>=target){
                mn=min(mn,i-low+1);
                sum-=nums[low++];
            }
        }
        if(mn==n+1)
            return 0;
        return mn;
    }
};