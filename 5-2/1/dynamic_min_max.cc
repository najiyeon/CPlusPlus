#include <iostream>

using namespace std;

void getMinMac(int* arr, int len, int& min, int& max){
    int tmp_min = arr[0];
    for(int i=0; i<len; i++){
        if(arr[i] < tmp_min){
            tmp_min = arr[i];
        }
    }

    int tmp_max = arr[0];
    for(int i=0; i<len; i++){
        if(arr[i] > tmp_max){
            tmp_max = arr[i];
        }
    }

    min = tmp_min;
    max = tmp_max;
}

int main(int argc, char* argv[]){
    if(argc == 1){
        fputs("Usage: ./dynamic_min_max num1 num2 ... numN\n", stderr);
        exit(1);
    }

    int N = argc - 1;
    int *num = new int[N];

    for(int i=0; i<N; i++){
        num[i] = atoi(argv[i+1]);
    }

    int min, max;

    getMinMac(num, N, min, max);
    
    cout << "min: " << min << endl;
    cout << "max: " << max << endl;

    delete[] num;

    return 0;
}