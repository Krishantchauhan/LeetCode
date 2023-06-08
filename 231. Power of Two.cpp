class Solution {
public:
    bool isPowerOfTwo(int n) {

        // int ct=0;
        if(n<=0)
            return false;
        if((n&(n-1))==0)
            return true;
        // for(int i=0;i<32;i++){
        //     ct+=(n>>i)&1;
        // }
        // return (ct==1);
        return 0;
    }
};