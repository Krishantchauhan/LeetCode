class Solution
{
public:
    string reverseVowels(string s)
    {

        int low = 0, high = s.length() - 1;

        while (low < high)
        {
            if (check(s[low]) && check(s[high]))
            {
                swap(s[low], s[high]);
                low++;
                high--;
            }
            else if (check(s[low]))
                high--;
            else if (check(s[high]))
                low++;
            else
            {
                low++;
                high--;
            }
        }
        return s;
    }

    bool check(char ch)
    {
        return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
                ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U');
    }
};