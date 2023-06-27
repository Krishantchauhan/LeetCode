class Solution
{
public:
    int commonFactors(int a, int b)
    {
        int ct = 0;
        if (a != b)
        {
            int flag = min(a, b);
            int f = abs(a - b);
            for (int i = 1; i <= f && i <= flag; i++)
            {
                if (a % i == 0 && b % i == 0)
                {
                    ct++;
                }
            }
        }
        else
        {
            for (int i = 1; i <= a; i++)
            {
                if (a % i == 0)
                {
                    ct++;
                }
            }
        }
        return ct;
    }
};