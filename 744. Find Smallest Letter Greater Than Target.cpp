class Solution {
public:
    char nextGreatestLetter(vector<char>& arr, char target) {
        int n=arr.size();
        int low=0,high=n-1;
        char mx=-1;
        while(low<=high){
            int mid=low+(high-low)/2;
            // if(arr[mid]==target)
            //     low=mid+1
            if(arr[mid]<=target)
                low=mid+1;
            else if(arr[mid]>target){
                high=mid-1;
                mx=arr[mid];
            }           
        }
        return (mx == -1) ? arr[0] : mx;
    }
};