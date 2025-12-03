#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of elements (sorted array): ";
    cin >> n;

    int arr[n];
    cout << "Enter elements in ascending order:\n";
    for(int i = 0; i < n; i++)
        cin >> arr[i];

    int low = 0, high = n - 1;
    int ans = arr[n - 1];  // last element is largest in sorted array

    while(low <= high) {
        int mid = (low + high) / 2;

        // move right when array is increasing
        if(mid < n - 1 && arr[mid] < arr[mid + 1])
            low = mid + 1;
        else
            high = mid - 1;
    }

    cout << "Largest element = " << arr[low];
    return 0;
}
