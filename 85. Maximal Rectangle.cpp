class Solution {
public:
    int calc(vector<int>& arr, int n)
    {
        vector<int> left;
        stack<pair<int, int>> st1;

        for (int i = 0; i < n; i++)
        {
            if (st1.empty())
                left.push_back(-1);
            else if (st1.size() > 0 && st1.top().first < arr[i])
                left.push_back(st1.top().second);
            else if (st1.size() > 0 && st1.top().first >= arr[i])
            {
                while (st1.size() > 0 && st1.top().first >= arr[i])
                    st1.pop();
                if (st1.empty())
                    left.push_back(-1);
                else
                    left.push_back(st1.top().second);
            }
            st1.push(make_pair(arr[i], i));
        }

        vector<int> right(n);
        stack<pair<int, int>> st2;

        for (int i = n - 1; i >= 0; i--)
        {
            if (st2.empty())
                right[i] = n;
            else if (st2.size() > 0 && st2.top().first < arr[i])
                right[i] = st2.top().second;
            else if (st2.size() > 0 && st2.top().first >= arr[i])
            {
                while (st2.size() > 0 && st2.top().first >= arr[i])
                    st2.pop();
                if (st2.empty())
                    right[i] = n;
                else
                    right[i] = st2.top().second;
            }
            st2.push(make_pair(arr[i], i));
        }

        int maxArea = 0;
        for (int i = 0; i < n; i++)
        {
            int width = right[i] - left[i] - 1;
            int area = arr[i] * width;
            maxArea = max(maxArea, area);
        }

        return maxArea;
    }

    int maximalRectangle(vector<vector<char>>& matrix) {
        int m = matrix.size();
        if (m == 0) return 0;
        int n = matrix[0].size();
        int mx = 0;

        vector<int> ans(n, 0);

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (matrix[i][j] == '1')
                    ans[j] += 1;
                else
                    ans[j] = 0;
            }

            mx = max(mx, calc(ans, n));
        }

        return mx;
    }
};