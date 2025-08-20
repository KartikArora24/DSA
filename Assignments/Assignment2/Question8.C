#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;
    int arr[100]; 
    cout << "Enter elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int disCount = 0;
    for (int i = 0; i < n; i++) {
        bool isDup = false;
        for (int j = 0; j < i; j++) {
            if (arr[i] == arr[j]) {
                isDup = true;
                break;
            }
        }
        if (!isDup) {
            disCount++;
        }
    }
    cout << "Total distinct elements: " << disCount << endl;
    return 0;
}
