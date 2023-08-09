class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int r = matrix.size(), c = matrix[0].size();
        int left = 0, top = 0, right = c - 1, bottom = r - 1;
        vector <int> trav;
        while (left <= right && top <= bottom)
        {
            for (int i = left; i <= right; i++)
                trav.push_back(matrix[top][i]);
            top++;
            for (int i = top; i <= bottom; i++)
                trav.push_back(matrix[i][right]);
            right--;
            if(top<=bottom){
                for (int i = right; i >= left; i--)
                    trav.push_back(matrix[bottom][i]);
                bottom--;
            }
            if(left<=right){
                for (int i = bottom; i >= top; i--)
                    trav.push_back(matrix[i][left]);
                left++;
            }
        }
        return trav;
    }
};