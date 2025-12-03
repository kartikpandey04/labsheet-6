#include <iostream>
using namespace std;

int main() {
    int r, c;
    cout << "Enter rows and columns: ";
    cin >> r >> c;

    int A[r][c], B[r][c];

    cout << "Enter Matrix A:\n";
    for(int i = 0; i < r; i++)
        for(int j = 0; j < c; j++)
            cin >> A[i][j];

    cout << "Enter Matrix B:\n";
    for(int i = 0; i < r; i++)
        for(int j = 0; j < c; j++)
            cin >> B[i][j];

    cout << "Difference Matrix:\n";
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++)
            cout << A[i][j] - B[i][j] << " ";
        cout << endl;
    }

    return 0;
}
