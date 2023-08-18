class Solution {
public:
    int findPeakElement(vector<int>& a) {
        int n=a.size();
        if (n == 1){
            return 0;
        }

        // if (a[n - 1] >= a[n - 2]){
        //     return n-1;
        // }

        // if (a[0] >= a[1]){
        //     return 0;
        // }
        // for (int i = 0; i < n - 1; i++)
        // {
        //     if (a[i] >= a[i + 1] && a[i] >= a[i - 1]){
        //         return i;
        //     }
        // }
        // return 0;

        int low=0,high=n-1;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(mid>0 && mid<n-1){
                if(a[mid]>a[mid-1] &&
                    a[mid]>a[mid+1])
                    return mid;
                else if(a[mid]<a[mid-1])
                    high=mid-1;
                else
                    low=mid+1;
            }else if(mid==0){
                if(a[mid]>a[mid+1])
                    return 0;
                    return 1;
            }
            else if(mid==n-1){
                if(a[mid-1]>a[n-2])
                    return n;
                    return n-1;
            }
        }
        return 0;
    }
};