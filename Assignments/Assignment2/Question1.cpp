#include <iostream>
using namespace std;
int binarySearch(int arr[], int size, int n) {
    int left = 0;
    int right = size - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == n) {
            return mid;
        } else if (arr[mid] < n) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    return -1;
}

int main() {
    int arr[] = {2, 4, 10, 15, 23, 31, 45, 59};
    int size = sizeof(arr) / sizeof(arr[0]);
    int n;

    cout << "Enter the number to search: ";
    cin >> n;

    int result = binarySearch(arr, size, n);

    if (result != -1) {
        cout << "Element found at index " << result << endl;
    } else {
        cout << "Element not found in the array." << endl;
    }

    return 0;
}
