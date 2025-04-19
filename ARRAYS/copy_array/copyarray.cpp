#include <iostream>
using namespace std;

int main() {
    int n;

    // Taking array size input
    cout << "Enter the size of the array: ";
    cin >> n;

    int originalArray[n];
    int copiedArray[n];

    // Taking array elements input
    cout << "Enter " << n << " elements:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> originalArray[i];
    }

    // Copying elements
    for (int i = 0; i < n; i++) {
        copiedArray[i] = originalArray[i];
    }

    // Display copied array
    cout << "Copied Array: ";
    for (int i = 0; i < n; i++) {
        cout << copiedArray[i] << " ";
    }
}
