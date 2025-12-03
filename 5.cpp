#include <iostream>
using namespace std;

int main() {
    int arr[10], even = 0, odd = 0;

    cout << "Enter 10 numbers:\n";
    for(int i = 0; i < 10; i++) {
        cin >> arr[i];
        if(arr[i] % 2 == 0) even++;
        else odd++;
    }

    cout << "Even = " << even << endl;
    cout << "Odd = " << odd;

    return 0;
}
