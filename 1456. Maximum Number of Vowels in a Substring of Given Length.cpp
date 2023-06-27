
static int fast_io = []()
{ std::ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr); return 0; }();

class Solution
{
private:
    static bool isVowel(char ch)
    {
        return ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u';
    }

public:
    static int maxVowels(const string &s, int k)
    {
        int cnt = count_if(begin(s), next(begin(s), k), isVowel);
        int ans = cnt;
        if (ans == k)
            return ans;

        for (int i = k; i < size(s); ++i)
        {
            cnt += isVowel(s[i]);
            cnt -= isVowel(s[i - k]);
            ans = max(ans, cnt);
            if (ans == k)
                return ans;
        }
        return ans;
    }
};