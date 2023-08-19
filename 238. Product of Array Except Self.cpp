class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        // int n=nums.size();
        // vector<int>ans(n,1);

        // for(int i=1;i<n;i++)
        //     ans[i]=ans[i-1]*nums[i-1];

        // for(int i=n-2;i>=0;i--){
        //     ans[i]*=nums[i+1];
        //     nums[i]*=nums[i+1];
        // }

        // return ans;


        int n=nums.size();
        vector<int>left(n,1);
        vector<int>right(n,1);

        for(int i=1;i<n;i++)
            left[i]=left[i-1]*nums[i-1];

        for(auto it:left)
            cout<<it<<" "<<endl;
        
        for(int i=n-2;i>=0;i--)
            right[i]=right[i+1]*nums[i+1];
        
        for(auto it:right)
            cout<<it<<" ";

        vector<int>ans(n,1);
        for(int i=0;i<n;i++)
            ans[i]=left[i]*right[i];

        return ans;
    }
};