class Solution
{
public:
    int calc(int num)
    {
        int ct = 0;
        while (num > 0)
        {
            ct += num & 1;
            num >>= 1;
        }
        return ct;
    }

    int sumIndicesWithKSetBits(vector<int> &nums, int k)
    {
        int sum = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            if (calc(i) == k)
                sum += nums[i];
        }
        return sum;
    }
};