class Solution
{
public:
    int minLengthAfterRemovals(vector<int> &nums)
    {
        int n = nums.size();
        unordered_map<int, int> mp;
        priority_queue<int> pq;

        for (auto it : nums)
            mp[it]++;

        for (auto it : mp)
            pq.push(it.second);
        // cout<<pq.size();
        while (!pq.empty())
        {
            if (pq.size() == 1)
                return pq.top();

            int top1 = pq.top();
            pq.pop();
            int top2 = pq.top();
            pq.pop();

            if (top1 > 1)
                pq.push(top1 - 1);
            if (top2 > 1)
                pq.push(top2 - 1);
        }
        return 0;
    }
};