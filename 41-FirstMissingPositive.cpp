class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {

        map<int,int>idx;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            idx[nums[i]]++;
        }
        
        for(int i=1;i<n+1;i++){
            if(idx[i]==0){
                return i;
            }
        }
        return n+1;

    }
};