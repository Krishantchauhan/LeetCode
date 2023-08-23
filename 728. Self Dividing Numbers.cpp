class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> v;
        while(left<=right)
        {
           int x=left,flag=0;
           while(x>0)
            {
               int y=x%10;
               if(y==0)
                {
                   flag=1;
                   break;
                }
               if(left%y!=0)
               {
                   flag=1;
                   break;
               }
               x/=10;
            }
           if(flag==0)
                v.push_back(left);
            left++;
        } 
        return v;
    }
};