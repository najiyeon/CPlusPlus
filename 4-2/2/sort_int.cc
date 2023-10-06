#include <iostream>

using namespace std;

void sort(int* arr, int N){
    for(int i=0; i<N-1; i++){
        for(int j=0; j<N-1-i; j++){
            if(arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int main(){
    int N;
    cin >> N;

    if (N <= 0) {
        return 1;
    }
    
    int *arr = new int[N];

    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    sort(arr, N);

    for (int i = 0; i < N; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    delete[] arr;

    return 0;
}