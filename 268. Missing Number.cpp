class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        int idx[10001]={0};

        for(int i=0;i<n;i++){
            idx[nums[i]]++;
        }

        for(int i=0;i<10001;i++){
            if(idx[i]==0)
                return i;
        }

        return 0;
    }
};