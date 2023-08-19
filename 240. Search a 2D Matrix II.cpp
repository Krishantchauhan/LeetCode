class Solution
{
public:
    bool searchMatrix(vector<vector<int>> &matrix, int target)
    {
        int r = matrix.size();
        int c = matrix[0].size();

        int low = 0, high = c - 1;

        while (low < r && high >= 0)
        {
            if (matrix[low][high] == target)
            {
                matrix.clear();
                return true;
            }
            else if (matrix[low][high] < target)
            {
                low++;
            }
            else
            {
                high--;
            }
        }
        matrix.clear();
        return false;
    }
};