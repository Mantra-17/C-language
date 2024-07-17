#include<stdio.h>

void printarithmetic();
int a;
int b;
int main() {
    // arithmetic using functions

    printf("enter the value of a:");
    scanf("%d", &a);

    printf("enter the value of b:");
    scanf("%d", &b);

     printarithmetic();
    return 0;

}

void printarithmetic() {

    printf("sum of two numbers is : %d\n", a+b);
}
