#include <iostream>
#include <string>

using namespace std;

struct Person{
    string name;
    double score;
};

int main(int argc, char* argv[]){
    if(argc == 1){
        fputs("Usage: ./print_people N name score\n", stderr);
        exit(1);
    }

    int N = atoi(argv[1]);
    Person *people = new Person[N];

    for(int i=0; i<N; i++){
        people[i].name = argv[(i+1)*2];
        people[i].score = strtod((argv[(i+1)*2+1]), NULL);
    }

    for(int i=0; i<N; i++){
        cout << "Name: " << people[i].name << ", Score: " << people[i].score << endl;
    }

    delete[] people;

    return 0;
}