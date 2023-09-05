class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        vector<vector<int>>ans;

        for(int i=0;i<image.size();i++){
            int low=0,high=image[0].size()-1;
            while(low<=high){
                swap(image[i][low],image[i][high]);
                int t1= image[i][low]; 
                int t2= image[i][high];
                image[i][low]=!t1;
                image[i][high]=!t2;
                low++;
                high--;
            }
        }

        for(int i=0;i<image.size();i++){
            for(int j=0;j<image[0].size();j++){
                cout<<image[i][j]<<" ";
            }
            cout<<endl;
        }
        return image;      

        
    }
};