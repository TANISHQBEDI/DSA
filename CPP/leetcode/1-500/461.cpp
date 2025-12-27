class Solution {
public:
    int hammingDistance(int x, int y) {
        /**
        *   0 0 0 1
        * ^ 0 1 0 0
        * -----------
        *   0 1 0 1
        * -----------
        */
        int exor = x^y;
        int count = 0;
        while(exor>0){
            exor&=exor-1;
            count++;
        }
        return count;

    }
};