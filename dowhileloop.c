#include<stdio.h>
int n;
//in reverse order
int main() {
    printf("enter n:");
    scanf("%d", &n);

    int i=n;
    do{
        printf("%d \n", i);
       i = i-100;
    }while(i>=1);
    return 0;
}