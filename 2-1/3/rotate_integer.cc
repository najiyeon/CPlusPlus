#include <stdio.h>

void rotateLeft(int* pa, int* pb, int* pc){
    int temp = *pa;
    *pa = *pb;
    *pb = *pc;
    *pc = temp;
}

void rotateRight(int* pa, int* pb, int* pc){
    int temp = *pc;
    *pc = *pb;
    *pb = *pa;
    *pa = temp;
}

int main(void){
    int a = 10;
    int b = 20;
    int c = 30;

    int shift;

    printf("%d:%d:%d\n", a, b, c);

    scanf("%d", &shift);

    while(shift == 1 | shift ==2){
        if(shift == 1){
            rotateLeft(&a, &b, &c);
        }
        else if(shift == 2){
            rotateRight(&a, &b, &c);
        }
        printf("%d:%d:%d\n", a, b, c);
        scanf("%d", &shift);
    }

    return 0;
}