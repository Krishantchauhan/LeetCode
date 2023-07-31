class Solution
{
public:
    int clumsy(int n)
    {
        stack<int> st;
        st.push(n);
        string operation = "*/+-";
        int pos = 0;
        for (int i = n - 1; i > 0; i--)
        {
            char op = operation[pos % 4];
            if (op == '*')
                st.top() *= i;
            else if (op == '/')
                st.top() /= i;
            else if (op == '+')
                st.push(i);
            else
                st.push(-i);
            pos++;
        }
        int sum = 0;
        while (!st.empty())
        {
            sum += st.top();
            st.pop();
        }
        return sum;
    }
};