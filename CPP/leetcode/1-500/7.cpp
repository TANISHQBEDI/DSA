#include <limits.h>
using namespace std;
class Solution {
public:
    int reverse(int x) {
        int reversed_num = 0;
        while(x!=0){
            int last_digit = x%10;
            if(reversed_num<INT_MIN/10 || reversed_num>INT_MAX/10) return 0;
            reversed_num = (reversed_num*10)+last_digit;
            x/=10;
        }
        return reversed_num;
    }
};