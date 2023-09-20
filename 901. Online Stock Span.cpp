class StockSpanner
{
public:
    StockSpanner()
    {
    }

    stack<pair<int, int>> st;

    int next(int price)
    {
        int ct = 1;

        while (st.size() > 0 && st.top().first <= price)
        {
            ct += st.top().second;
            // cout<<st.top().first<<" "<<st.top().second<<endl;
            st.pop();
        }
        st.push({price, ct});
        return ct;
    }
};
