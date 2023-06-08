class Solution
{
public:
    Solution()
    {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
    }
    int maximumScore(int a, int b, int c)
    {
        priority_queue<int> pq;
        int ct = 0;
        pq.push(a);
        pq.push(b);
        pq.push(c);

        while (pq.size() > 1)
        {
            int x = pq.top();
            pq.pop();

            int y = pq.top();
            pq.pop();

            x--;
            y--;
            ct++;

            if (x > 0)
                pq.push(x);
            if (y > 0)
                pq.push(y);
        }
        return ct;
    }
};