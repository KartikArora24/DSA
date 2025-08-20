#include <iostream>
using namespace std;

int countInv(int arr[], int n) {
    int c = 0;
    for(int i = 0; i < n-1; i++) {
        for(int j = i+1; j < n; j++) {
            if(arr[i] > arr[j]) {
                c++;
            }
        }
    }
    return c;
}
int main() 
{
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter array elements:\n";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int inv = countInv(arr, n);
    cout << "Number of inversions: " << inv << endl;

    return 0;
}
