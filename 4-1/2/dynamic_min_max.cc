#include <iostream>

using namespace std;

int main(){
    // Take an integer N from the user and create an array of length N.
    int N;
    cin >> N;
    int *arr = new int[N];

    // Take N integers from the user and fill the array with them.
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    // Print the min, max value in the array.
    int min = arr[0], max = arr[0];

    for (int i = 1; i < N; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    cout << "min: " << min << endl;
    cout << "max: " << max << endl;

    delete [] arr;

    return 0;
}