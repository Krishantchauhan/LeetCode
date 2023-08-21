class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int low=0;
        int mx=-1,sum=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            while(i-low+1!=sum){
                sum-=nums[low];
                low++;
            }
            mx=max(mx,i-low+1);
        }
        return mx;
    }
};