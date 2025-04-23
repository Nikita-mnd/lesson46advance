#include <iostream>
using namespace std;
int count_saddle(int matrix[][100], int rows, int cols);
int main() {
    const int rows = 4, cols = 4;
    int matrix[100][100] = {
        {1, 2, 3, 4},
        {5, 6, 1, 8},
        {9, 10, 11, 7},
        {12, 3, 2, 1}
    };

    cout << "count saddle ooints: " << count_saddle(matrix, rows, cols) << endl;

    return 0;
}