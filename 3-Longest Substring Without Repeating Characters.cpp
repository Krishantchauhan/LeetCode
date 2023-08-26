class Solution
{
public:
    int lengthOfLongestSubstring(string s)
    {
        unordered_map<char, int> mp;

        int maxi = 1;
        int low = 0;

        if (s.size() == 0)
        {
            return 0;
        }

        for (int i = 0; i < s.size(); i++)
        {
            if (mp.find(s[i]) != mp.end())
            {
                int pos = mp[s[i]];
                while (low <= pos)
                {
                    mp.erase(s[low]);
                    low++;
                }
                mp[s[i]] = i;
            }
            else
            {
                mp[s[i]] = i;
            }
            maxi = max(maxi, int(mp.size()));
        }
        return maxi;
    }
};