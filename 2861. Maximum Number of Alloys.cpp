class Solution {
public:
    
    bool calc(int i, int alloy, long long budget, vector<vector<int>>& composition, vector<int>& stock, vector<int>& cost) {
        
        for (int j = 0; j < composition[i].size(); j++) {
            long long metal = static_cast<long long>(composition[i][j]) * alloy;
            if (metal > stock[j]) {
                budget -= (metal - stock[j]) * static_cast<long long>(cost[j]);
            }
            if (budget < 0) 
                return false;
        }
        return true;
    }

    int maxNumberOfAlloys(int n, int k, int budget, vector<vector<int>>& composition, vector<int>& stock, vector<int>& cost) {
        int low = 0, high = INT_MAX;
        int mx = 0;

        while (low <= high) {
            int mid = low+(high-low) / 2;
            bool flag = false;

            for (int i = 0; i < k; i++) {
                if (calc(i, mid, budget, composition, stock, cost)) {
                    mx = mid;
                    flag = true;
                    low = mid + 1;
                    break;
                }
            }

            if (!flag) 
                high = mid - 1;
        }
        return mx;
    }
};