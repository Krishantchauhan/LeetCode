class Solution
{
public:
    double findMedianSortedArrays(vector<int> &nums1, vector<int> &nums2)
    {
        vector<int> v;
        for (auto it : nums1)
            v.push_back(it);

        for (auto it : nums2)
            v.push_back(it);

        sort(v.begin(), v.end());

        int n = v.size();
        if (n % 2 != 0)
            return v[n / 2];
        else
            return (v[n / 2 - 1] + v[n / 2]) / 2.0;
    }
};
