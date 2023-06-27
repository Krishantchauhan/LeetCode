static auto _enhancer = []()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    return 0;
}();

class Solution
{
public:
    int longestSubarray(vector<int> &nums)
    {
        const int n = nums.size();

        int l = 0;
        int r = 0;
        int flips = 1;
        int maxLen = 0;

        while (r < n)
        {
            if (nums[r] == 0)
                flips--;

            if (flips < 0)
            {
                while (nums[l++])
                {
                }
                flips++;
            }

            maxLen = max(maxLen, r - l);
            r++;
        }

        return maxLen;
    }
};