class Solution
{
public:
    int minimumRightShifts(vector<int> &nums)
    {
        int n = nums.size();
        int idx = -1;
        int ct{};
        for (int i = 0; i < n - 1; i++)
        {
            if (nums[i] > nums[i + 1])
            {
                if (ct == 0)
                {
                    idx = i + 1;
                    ct++;
                }
                else
                    return -1;
            }
        }
        if (idx == -1)
            return 0;
        if (nums[n - 1] > nums[0])
            return -1;
        return n - idx;
    }
};