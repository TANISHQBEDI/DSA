#include <iostream>

using namespace std;

class Solution{
    public:
        int subtractProductAndSum(int n) {

            int sum = 0, product = 1;

            while(n!=0){
                int rem = n % 10;
                sum+=rem;
                product*=rem;
                n/=10;
            }
            int answer = product - sum;
            return answer;
        }
};