#include <vector>
using namespace std;
class Solution {
public:
    int maxSubArray(vector<int>& nums) {

        /**
         *  Consider a array [ , , , , , ]
         *  Here if the curr sum is less than the curr num we reset the subarray
         *  Otherwise we continue calculating subarray sum
         */

        int max_sum = nums[0],  curr_sum = 0;
        for(int num: nums){

            curr_sum += num;

            if(curr_sum < num) curr_sum = num;

            max_sum = max(max_sum, curr_sum);
        }
        return max_sum;
    }
};