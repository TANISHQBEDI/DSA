#include <vector>
#include <iomanip>
#include <iostream>

using namespace std;

class Solution
{
public:
    void printMatrix(vector<vector<int>> grid)
    {
        for (auto &row : grid)
        {
            for (auto &col : row)
            {
                cout << setw(3) << col << " ";
            }
            cout << "\n";
        }
    }

    int firstNegative(const vector<int>& row) {
    int l = 0, r = row.size() - 1, ans = -1;
    while (l <= r) {
        int mid = l + (r - l)/2;
        if (row[mid] < 0) {
            ans = mid;      // possible first negative
            r = mid - 1;    // move left to check earlier negatives
        } else {
            l = mid + 1;    // move right
        }
    }
    return ans;
}

int lastNegative(const vector<int>& row) {
    int l = 0, r = row.size() - 1, ans = -1;
    while (l <= r) {
        int mid = l + (r - l)/2;
        if (row[mid] < 0) {
            ans = mid;      // possible last negative
            l = mid + 1;    // move right to check later negatives
        } else {
            l = mid + 1;    // move right for positives
        }
    }
    return ans;
}

    int countNegatives(vector<vector<int>> &grid)
    {
        // printMatrix(grid);
        int count = 0;
        int size = grid[0].size();
        for (auto row : grid)
        {
            int firstIndex = firstNegative(row);
            int lastIndex = lastNegative(row);
            cout<<setw(5)<<lastIndex<<setw(5)<<firstIndex<<"\n";
            if(firstIndex!=-1)  count+=(lastIndex - firstIndex + 1);
        }
        return count;
    }
};