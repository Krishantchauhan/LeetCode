class Solution {
public:
    int findMin(vector<int>& nums) {
        int low=0,high=nums.size()-1;
        int n=nums.size(),mid;
        while(low<=high){
            mid=low+(high-low)/2;
            int nxt=(mid+1)%n;
            int prev=(mid+n-1)%n;
            if(nums[mid]<=nums[nxt]  && nums[mid]<=nums[prev])
                return nums[mid];
            else if(nums[low]<=nums[mid])
                low=mid+1;
            else if (nums[high] <= nums[mid])
                high=mid-1;
        }
        return nums[0];
    }
};