#include <iostream>

using namespace std;

int main(int argc, char* argv[]){
    if(argc == 1){
        fputs("Usage: ./magic_square N\n", stderr);
        exit(1);
    }

    int N = atoi(argv[1]);

    if(N % 2 == 0 || N < 3){
        return 1;
    }

    int **arr = new int*[N];

    for(int i=0; i<N; i++){
        arr[i] = new int[N];
    }

    int x = 0, y = N/2;

    for(int i=1; i<=N*N; i++){
        arr[x][y] = i;

        int next_x = (x-1+N) % N;
        int next_y = (y+1) % N;

        if(arr[next_x][next_y] == 0){
            x = next_x;
            y = next_y;
        }else{
            x = (x+1) % N;
        }
    }

    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    for(int i=0; i<N; i++){
        delete[] arr[i];
    }
    delete[] arr;

    return 0;
}