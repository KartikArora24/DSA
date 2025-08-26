#include <iostream>
#include <vector>
using namespace std;

int countPairs(vector<int> &arr, int k) {
    int n = arr.size();
    int count = 0;

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            
        
            if (abs(arr[i] - arr[j]) == k) {
                count += 1;
            }
        }
    }
    return count;
}

int main() {
    vector<int> arr = {1, 4, 1, 4, 5};
    int k = 3;

    cout << countPairs(arr, k);
    return 0;
}