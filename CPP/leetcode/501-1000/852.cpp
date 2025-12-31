#include <vector>
using namespace std;

class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {

        int l = 0, r = arr.size()-1;
        
        while(l < r){

            int mid = l + ((r - l) / 2);

            // Peak element
            if(arr[mid - 1] < arr[mid] && arr[mid] > arr[mid + 1]) return mid;
            
            // Increasing set
            else if(arr[mid - 1] < arr[mid] && arr[mid] < arr[mid + 1]) l = mid;
            
            // Decreasing set
            else r = mid;
        }

        return -1;
        
    }
};