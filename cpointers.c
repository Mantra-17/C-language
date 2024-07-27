// swapping using reference 

#include<stdio.h>
void swap(int *a, int *b);
//call by reference 
int main() {
    int x =3;
    int y = 4;
int t,a,b;
    swap(&x,&y);
    printf("x=%d\n y = %d\n", x,y);

    return 0;

}

void swap(int *a, int *b) {
    int t = *a;
    *a=*b;
    *b=t;

}