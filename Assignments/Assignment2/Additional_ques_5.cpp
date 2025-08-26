#include <iostream>
#include <vector>
using namespace std;

void duplicateTwos(vector<int>& arr) {
    int n = arr.size();
    int possibleDups = 0;
    int length = n - 1;

    for (int i = 0; i <= length - possibleDups; ++i) {
        if (arr[i] == 2) {
            if (i == length - possibleDups) {
                arr[length] = 2;
                length -= 1;
                break;
            }
            possibleDups++;
        }
    }

    int last = length - possibleDups;
    for (int i = last; i >= 0; --i) {
        if (arr[i] == 2) {
            arr[i + possibleDups] = 2;
            possibleDups--;
            arr[i + possibleDups] = 2;
        } else {
            arr[i + possibleDups] = arr[i];
        }
    }
}

int main() {
    vector<int> arr = {2,1,2,3,1,5,2};

    duplicateTwos(arr);

    for (int x : arr) {
        cout << x << " ";
    }

    return 0;
}
