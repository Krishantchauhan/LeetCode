class Solution
{
public:
    bool isHappy(int n)
    {
        unordered_set<int> st;

        while (n > 1)
        {
            st.insert(n);
            int sum = 0;
            while (n)
            {
                int rem = n % 10;
                sum += rem * rem;
                n /= 10;
            }
            n = sum;
            if (st.find(n) != st.end())
                return false;
        }
        return n == 1;
    }
};