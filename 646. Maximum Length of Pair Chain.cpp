class Solution
{
public:
    int findLongestChain(vector<vector<int>> &pairs)
    {
        // sort(pairs[1].begin(),pairs[1].end());
        sort(pairs.begin(), pairs.end(), [](const vector<int> &a, const vector<int> &b)
             { return a[1] < b[1]; });

        int mx = 1;
        int pair_end = pairs[0][1];

        for (int i = 1; i < pairs.size(); i++)
        {
            if (pairs[i][0] > pair_end)
            {
                mx++;
                pair_end = pairs[i][1];
            }
        }

        return mx;
    }
};