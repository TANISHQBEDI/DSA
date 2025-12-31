#include <vector>

using namespace std;

class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        
        int left_sum = 0, right_sum = 0;

        // find the right sum
        for(int num: nums){ right_sum+=num; }
        
        for(int i = 0; i < nums.size(); i++){

            // right sum is total - curr element at every iter
            right_sum-=nums[i];

            // left is left+last
            if(i>0) left_sum+=nums[i-1];
            
            if(right_sum == left_sum) return i;
        }
        return -1;
    }
};