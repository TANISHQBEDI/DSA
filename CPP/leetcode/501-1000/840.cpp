#include <iostream>
#include <set>
#include <vector>

using namespace std;

class Solution {
public:

    int validateRows(int row, int col, vector<vector<int>>& grid){
        int sum = 0;
        set<int> nums;
        for(int i = 0; i < 3; i++){
            int rowSum = 0;
            for(int j = 0; j < 3; j++){
                int val = grid[row + i][col + j];
                if(val < 1 || val > 9 || nums.count(val)) return 0; // invalid
                nums.insert(val);
                rowSum += val;
            }
            if(i == 0) sum = rowSum;
            else if(rowSum != sum) return 0; // row sum mismatch
        }
        return sum; // all rows valid & distinct numbers
    }
    int validateCols(int row, int col, vector<vector<int>>& grid){
        int sum;
        for(int i = 0; i < 3; i++){
            int colSum = grid[row][col + i] + grid[row + 1][col + i] + grid[row + 2][col + i];
            if(i == 0){
                sum = colSum;
            }
            if(sum!=colSum) return 0;
        }
        return sum;
    }

    int validateBackwardDiag(int row, int col, vector<vector<int>>& grid, int sum){
        int diagSum = 0;
        for(int i = 0; i < 3; i++){
            diagSum+=grid[row + i][col + i];
        }
        if(diagSum==sum) return diagSum;
        return 0;
    }

    int validateForwardDiag(int row, int col, vector<vector<int>>& grid, int sum){
        int diagSum = grid[row][col + 2] + grid[row + 1][col + 1] + grid[row + 2][col];
        if(diagSum==sum) return diagSum;
        return 0;
    }

    int numMagicSquaresInside(vector<vector<int>>& grid) {
        int ROW = grid.size(), COL = grid[0].size();
        int count = 0;
        for(int row = 0; row <= ROW - 3; row++){
            for (int col = 0; col <= COL - 3; col++){

                int rowSum = validateRows(row, col, grid);
                if(rowSum == 0) continue;

                int colSum = validateCols(row, col, grid);
                if(colSum == 0) continue;

                int bdiag = validateBackwardDiag(row, col, grid, rowSum);
                if(bdiag == 0) continue;

                int fdiag = validateForwardDiag(row, col, grid, rowSum);
                if(fdiag == 0) continue;

                if(rowSum == colSum && colSum == bdiag && bdiag == fdiag) count++;
            }
            cout<<endl;
        }
        return count;
    }
};