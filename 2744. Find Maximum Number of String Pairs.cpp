class Solution
{
public:
    int maximumNumberOfStringPairs(vector<string> &words)
    {
        int ct = 0;
        unordered_set<string> st;
        for (auto ch : words)
        {
            string rev = ch;
            reverse(rev.begin(), rev.end());
            if (st.count(rev) > 0)
                ct++;
            st.insert(ch);
        }
        return ct;
    }
};