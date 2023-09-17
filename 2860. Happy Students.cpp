class Solution {
public:
    int countWays(vector<int>& nums) {
        int ct=0;
        sort(nums.begin(),nums.end());
        
        int n=nums.size();
        
        // for(int i=0;i<n;i++){
        //     if( (nums[i]< i+1 ) && ((i+1<n) && (nums[i+1]>i+1)))
        //         ct++;
        //      else if((nums[i] < i+1) && (i+1==n))
        //         ct++;
        // }
        // if(nums[0]>0)
        //     ct++;
        // return ct;

        if(0<nums[0])
            ct++;
        for(int i=0;i<n-1;i++){
            if(i>=nums[i] && i+1<nums[i+1])
                ct++;
        }

        if(n-1>=nums[n-1])
            ct++;
        
        return ct;
    }
};