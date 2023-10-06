#include <stdio.h>
#include <string.h>

struct Person {
    char name[11];
    int age;
};

int main(){
    struct Person people[3];

    for(int i=0; i<3; i++){
        scanf("%s %d", people[i].name, &people[i].age);
    }

    for(int i=0; i<3; i++){
        printf("Name: %s, Age: %d\n", people[i].name, people[i].age);
    }

    return 0;
}
