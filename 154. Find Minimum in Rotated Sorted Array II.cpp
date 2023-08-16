class Solution {
public:
    int findMin(vector<int>& nums) {
        int low=0,high=nums.size()-1;
        int n=nums.size(),mid;
        while(low<high){
            mid=low+(high-low)/2;
            int nxt=(mid+1)%n;
            int prev=(mid+n-1)%n;
            if(nums[mid]<nums[nxt]  && nums[mid]<nums[prev])
                return nums[mid];
            if(nums[mid] == nums[low] && nums[mid] == nums[high]){
                low++;
                high--;
            }
            else if(nums[high]>=nums[mid])
                high=mid;
            else
                low=mid+1;
        }
        return nums[low];
    }
};