class Solution {
public:
    vector<int> shortestToChar(string s, char c) {
        vector<int>ans;

        for(int i=0; i<s.length(); i++)
        {
            int low = i;
            int high = i;

            while(true)
            {
                if(s[low]==c)
                {
                    ans.push_back(abs(i-low));
                    break;
                }
                if(s[high]==c)
                {
                    ans.push_back(abs(high-i));
                    break;
                }
                if(low>0)
                    low--;
                if(high<s.length()-1)
                    high++;
            }
        }    
        return ans;
    }
};