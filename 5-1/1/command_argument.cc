#include <iostream>
#include <string>

using namespace std;

int main(int argc, char* argv[]){
    if(argc == 1){
        fputs("Usage: ./command argument s n\n", stderr);
        exit(1);
    }

    string s = argv[1];
    int n = atoi(argv[2]);

    for(int i=0; i<n; i++){
        cout << s << endl;
    }

    return 0;
}