class Solution {
public:
    int maxArea(vector<int>& height) {
        int low=0,high=height.size()-1;
        int mx=0;

        while(low<high){
            int low_height=height[low];
            int end_height=height[high];

            int min_height=min(low_height,end_height);
            int area = min_height * (high-low);
            mx=max(area,mx);

            if(low_height<end_height)
                low++;
            else
                high--;
        }
        return mx;
    }
};