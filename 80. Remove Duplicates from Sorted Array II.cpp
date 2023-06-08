class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int pos = 0;
        int n = nums.size();

        for (int i = 0; i < n; i++) {
            if (pos < 2 || nums[i] != nums[pos - 2]) {
                nums[pos++] = nums[i];
            }
        }
        
        return pos;
    }
};
