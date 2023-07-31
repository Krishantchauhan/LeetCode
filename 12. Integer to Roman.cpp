class Solution
{
public:
    string intToRoman(int num)
    {
        // unordered_map<int, string> mp;
        // mp[1] = 'I';
        // mp[4] = "IV";
        // mp[5] = 'V';
        // mp[9] = "IX";
        // mp[10] = 'X';
        // mp[40] = 'XL';
        // mp[50] = 'L';
        // mp[90] = "XC";
        // mp[100] = 'C';
        // mp[400] = "CD";
        // mp[500] = 'D';
        // mp[900] = "CM";
        // mp[1000] = 'M';

        // string ans="";
        // int idx[]={1000, 500, 100, 50, 10, 5, 1};
        // for (int i = 0; i < 7; i++) {
        //     while (num >= idx[i]) {
        //         ans += mp[idx[i]];
        //         num -= idx[i];
        //     }
        // }
        // return ans;

        string ans = "";
        string rom[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
        int value[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
        for (int i = 0; num != 0; i++)
        {
            while (num >= value[i])
            {
                num -= value[i];
                ans += rom[i];
            }
        }
        return ans;
    }
};