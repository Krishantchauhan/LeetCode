class Solution {
public:
    int mySqrt(int x) {
        int i;
        for(i=1;i<=x/i;i++){
            if(x/i==i)
                return i;
        }
        return i-1;
    }
};