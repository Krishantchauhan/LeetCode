class Solution {
public:
    int minimumRecolors(string str, int k) {
        
        int n = str.size();
        int mx = INT_MIN;
        int ct = 0;     

        for(int i = 0; i < n; i++)
        {
            if(i < k)
            {
                if(str[i] == 'B')
                    ct++;
            }            
            else
            {
                mx = max(mx, ct);       
                if(str[i - k] == 'B')
                    ct--;
                if(str[i] == 'B')
                    ct++;
            }
        }

        mx = max(mx, ct);
        return k - mx;
    }
};