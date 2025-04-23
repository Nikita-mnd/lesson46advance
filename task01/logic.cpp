#include <iostream>
using namespace std;

int count_saddle(int matrix[][100], int rows, int cols) {
    int count = 0;

    for (int i = 0; i < rows; ++i) {
        int minir = matrix[i][0];
        int minci = 0;
        for (int j = 1; j < cols; ++j) {
            if (matrix[i][j] < minir) {
                minir = matrix[i][j];
                minci = j;
            }
        }

        bool s = true;
        for (int k = 0; k < rows; ++k) {
            if (matrix[k][minci] > minir) {
                s = false;
                break;
            }
        }

        if (s) {
            count++;
        }
    }

    return count;
}