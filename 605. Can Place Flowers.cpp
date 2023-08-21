class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        // int ct=0,n=flowerbed.size();
        // if(n==1&&flowerbed[0]==0)
        //     m--;
        // for(int i=0;i<n;i++)
        // {
        //     if(m<=0)
        //     return true;
        //     if(flowerbed[i]==0)
        //         ct++;
        //     else if(flowerbed[i]==1)
        //         ct=0;
        //     if(ct==2&&(i==1||i==n-1))
        //     {
        //         m--;
        //         ct=1;
        //     }
        //     if(ct==3)
        //     {
        //         m--;
        //         ct=1;
        //     }
        // }
        // if(m<=0)
        //     return true;
        // return false;
        if(n==0 && flowerbed.size()==1 && flowerbed[0]==1){
            return true;
        }

        if(n==1 && flowerbed.size()==1 && flowerbed[0]==1){
            return false;
        }

        if(n==0 && flowerbed.size()==1 && flowerbed[0]==0){
            return true;
        }

        if(n==1 && flowerbed.size()==1 && flowerbed[0]==0){
            return true;
        }

        for(int i=0;i<flowerbed.size();i++){
            if(n==0){
                break;
            }
            if(i==0 && i==flowerbed.size()-1 && flowerbed[i]==0){
                flowerbed[i]=1;
                n--;
            }

            if(i==0 && flowerbed[i]==0 && flowerbed[i+1]==0){
                flowerbed[i]=1;
                n--;
            }

            if(i>0 && i<flowerbed.size()-1){
                if(flowerbed[i-1]==0 && flowerbed[i]==0 && flowerbed[i+1]==0){
                    flowerbed[i]=1;
                    n--;
                }
            }

            if(i==flowerbed.size()-1 && flowerbed[i-1]==0 && flowerbed[i]==0){
                flowerbed[i]=1;
                n--;
            }
            
        }
        if(n==0){
            return true;
        }
        return false;
    }
};