class Solution {
public:
    int maximumGap(vector<int>& nums) {
        int temp=0,mx=0;
        int size=nums.size();
        if(size == 1)
            return 0;
        
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()-1;i++){
            temp=nums[i+1] - nums[i];
            // if(temp>mx)
                // mx=temp;
                mx=max(mx,temp);
        }

        return mx;
    }
};