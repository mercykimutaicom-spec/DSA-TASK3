
#include <iostream>
using namespace std;

int main() {
    int matrix[3][3] = {
        {0, 0, 5},
        {0, 8, 0},
        {3, 0, 0}
    };

    int sparse[10][3];
    int rows = 3, cols = 3;
    int count = 0;

    // Store non-zero elements
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (matrix[i][j] != 0) {
                count++;

                sparse[count][0] = i;
                sparse[count][1] = j;
                sparse[count][2] = matrix[i][j];
            }
        }
    }

    // Store matrix information
    sparse[0][0] = rows;
    sparse[0][1] = cols;
    sparse[0][2] = count;

    cout << "Sparse Matrix Representation:" << endl;
    cout << "Row\tColumn\tValue" << endl;

    for (int i = 0; i <= count; i++) {
        cout << sparse[i][0] << "\t"
             << sparse[i][1] << "\t"
             << sparse[i][2] << endl;
    }

    return 0;
}
