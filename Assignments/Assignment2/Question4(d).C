#include <iostream>
using namespace std;
void Sort(char str[]) {
    int n = 0;
    while (str[n] != '\0') {
        n++;
    }
    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < n - i - 1; ++j) {
            if (str[j] > str[j + 1]) {
                char temp = str[j];
                str[j] = str[j + 1];
                str[j + 1] = temp;
            }
        }
    }
}

int main() {
    char myString[] = "patiala";

    cout << "Original string: " << myString << endl;

    Sort(myString);

    cout << "Sorted string:   " << myString << endl;

    return 0;
}
