#include <vector>

using namespace std;

class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        
        int rows = image.size(), cols = image[0].size();

        for(int i=0; i<rows; i++){
            int l = 0, r = cols-1;
            while(l<r){
                int temp = image[i][l] ^ 1;
                image[i][l] = image[i][r] ^ 1;
                image[i][r] = temp;
                l++;
                r--; 
            }
            if(l==r) image[i][l]^=1;
        }
        return image;
        
    }
};