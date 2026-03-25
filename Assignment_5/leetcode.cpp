#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int m = grid.size(), n = grid[0].size();
        int i = m - 1; // row
        int j = 0;     // col

        int res = 0;

        while (i >= 0 && j < n) {
            if (grid[i][j] < 0) {
                res += n - j;
                i--;
            } else {
                j++;
            }
        }

        return res;
    }
};

int main() {
    Solution sol;

    vector<vector<int>> grid = {
        {4, 3, 2, -1},
        {3, 2, 1, -1},
        {1, 1, -1, -2},
        {-1, -1, -2, -3}
    };

    int result = sol.countNegatives(grid);

    cout << "Number of negative numbers: " << result << endl;

    return 0;
}