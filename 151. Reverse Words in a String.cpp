class Solution
{
public:
    string reverseWords(string s)
    {

        reverse(s.begin(), s.end());

        int i = 0, n = s.length();
        int low = 0, high = 0;

        while (i < n)
        {
            while (i < n && s[i] == ' ')
                i++;

            while (i < n && s[i] != ' ')
                s[high++] = s[i++];

            if (low < high)
            {
                reverse(s.begin() + low, s.begin() + high);
                s[high++] = ' ';
                low = high;
            }
            i++;
        }

        if (high > 0)
            s.resize(high - 1);

        return s;
    }
};