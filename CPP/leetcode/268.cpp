#include <vector>

using namespace std;
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int size = nums.size();
        int answer = 0;
        for(int i = 1; i <= size; i++){
            answer^=i;
        }
        for(int i = 0; i< size; i++){
            answer ^= nums[i];
        }
        return answer;
    }
};