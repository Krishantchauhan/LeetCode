class Solution
{
public:
    int nthUglyNumber(int n)
    {
        if (n <= 6)
            return n;

        priority_queue<long, vector<long>, greater<long>> pq;

        unordered_map<long, int> mp;

        pq.push(1);
        mp[1]++;

        long k = 1;

        for (int i = 0; i < n; i++)
        {
            k = pq.top();
            pq.pop();

            if (mp.find(k * 2) == mp.end())
            {
                pq.push(k * 2);
                mp[k * 2]++;
            }

            if (mp.find(k * 3) == mp.end())
            {
                pq.push(k * 3);
                mp[k * 3]++;
            }

            if (mp.find(k * 5) == mp.end())
            {
                pq.push(k * 5);
                mp[k * 5]++;
            }
        }
        return k;
    }
};
