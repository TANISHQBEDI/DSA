#include <vector>
#include <set>

using namespace std;
class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        set<int> seen(begin(arr), end(arr));
        
        int i = 1;
        while (k>=0){
            
            if(seen.find(i)==seen.end()){
                k--;
            }
            
            if(k==0){
                break;
            }
            
            i++;
        }
        return i;
    }
};