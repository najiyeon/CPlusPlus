#include <iostream>

using namespace std;

int main() {
    // Take an integer n from user and create an array of length n.
    int n;
    cin >> n;
    int *arr = new int[n];

    // Set the value of each element of the array to its index.
    for (int i = 0; i < n; i++) {
        arr[i] = i;
    }

    // Print out the contents of the array
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    cout << endl;

    // Delete the array.
    delete[] arr;

    return 0;
}