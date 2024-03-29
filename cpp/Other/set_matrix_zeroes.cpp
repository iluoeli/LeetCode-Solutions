/**
 * 73. Set Matrix Zeroes
 */

#include "common.h"

#if LEET_CODE == 73

class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix.front().size();

        bool setFirstCol = false; // Whether to set the first column.
        for (int i = 0; i < m; i ++)
            if (matrix[i][0] == 0)
                setFirstCol = true;

        for (int i = 0; i < m; i ++)
            for (int j = 1; j < n; j ++)
                if (matrix[i][j] == 0) {
                    matrix[i][0] = 0;
                    matrix[0][j] = 0;
                }

        // NOTE: Do NOT set the first row now.
        for (int i = 1; i < m; i ++)
            for (int j = 1; j < n; j ++) {
                if (matrix[i][0] == 0 || matrix[0][j] == 0)
                    matrix[i][j] = 0;
            }

        // Do not forget to set the first row and column.
        if (matrix[0][0] == 0)
            for (int j = 0; j < n; j ++)
                matrix[0][j] = 0;

        if (setFirstCol)
            for (int i = 0; i < m; i ++)
                matrix[i][0] = 0;
    }
};

#endif
