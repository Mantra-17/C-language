#include<stdio.h>

#define N 10

int main() {
    int a[N], key,count=0;

    printf("enter %d integers\n", N);
    for(int i=0;i<N;i++) {
        scanf("%d", &a[i]);

    }
    printf("enter the number to be searched in :\n");
    scanf("%d", &key);
    printf("\n");

    for( int i=0;i<N;i++) {
        if(a[i]==key) {
            count++;
        }

    }
    printf("\n %d has occured %d times in an array\n", key, count);
    return 0;
}