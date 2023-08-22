class Solution {
public:

    double findMaxAverage(vector<int>& nums, int k) {
        double sum=0,mx=-1;
        int low=0,high=k;
        for(int i=0;i<k;i++)
            sum+=nums[i];
        mx=sum/k;
        for(int i=k;i<nums.size();i++){
            sum+=nums[i]-nums[i-k];
            mx=max(mx,sum/k);
        }
        return mx;
    }
};