class Solution
{
public:
    vector<int> leftRightDifference(vector<int> &nums)
    {
        int sum = 0, n = nums.size();
        vector<int> l(n, 0);
        vector<int> r(n, 0);

        for (int i = 0; i < n; i++)
        {
            sum += nums[i];
            l[i] = sum;
        }
        sum = 0;
        for (int i = n - 1; i >= 0; i--)
        {
            sum += nums[i];
            r[i] = sum;
        }

        vector<int> ans;
        for (int i = 0; i < l.size(); i++)
        {
            ans.push_back(abs(l[i] - r[i]));
        }
        return ans;
    }
};