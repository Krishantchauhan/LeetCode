class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        if (arr.size() < 3)
            return false;
        
        int low = 0, high = arr.size() - 1;
        while (low < arr.size() - 2 && arr[low] < arr[low + 1])
            low++;
        while (high > 1 && arr[high - 1] > arr[high])
            high--;
        return low == high;
    }
};