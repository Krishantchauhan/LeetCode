class Solution
{
public:
    int removeElement(vector<int> &nums, int val)
    {
        int ct = 0;
        // for(int i=0;i<nums.size();i++){
        //     if(nums[i]==val){

        //     }

        // }
        int high = 0;
        auto low = nums.begin();
        while (high < nums.size())
        {
            if (nums[high] == val)
            {
                nums.erase(low);
                low--;
                high--;
            }
            low++;
            high++;
        }
        return nums.size();
    }
};