#include <iostream>
using namespace std;

int main() {
    int r1, c1, r2, c2;
    cout << "Enter rows & cols of Matrix A: ";
    cin >> r1 >> c1;
    cout << "Enter rows & cols of Matrix B: ";
    cin >> r2 >> c2;

    if(c1 != r2) {
        cout << "Matrix multiplication not possible!";
        return 0;
    }

    int A[r1][c1], B[r2][c2], C[r1][c2] = {0};

    cout << "Enter Matrix A:\n";
    for(int i = 0; i < r1; i++)
        for(int j = 0; j < c1; j++)
            cin >> A[i][j];

    cout << "Enter Matrix B:\n";
    for(int i = 0; i < r2; i++)
        for(int j = 0; j < c2; j++)
            cin >> B[i][j];

    for(int i = 0; i < r1; i++)
        for(int j = 0; j < c2; j++)
            for(int k = 0; k < c1; k++)
                C[i][j] += A[i][k] * B[k][j];

    cout << "Product Matrix:\n";
    for(int i = 0; i < r1; i++) {
        for(int j = 0; j < c2; j++)
            cout << C[i][j] << " ";
        cout << endl;
    }

    return 0;
}
