#include<stdio.h>
void printprice(int n);

void printprice(int n) {

printf("square of n is :%d\n", n*n);
}
int main() {
  int n;655
printf("enter the value of n:");
scanf("%d", &n);

printprice(n);

return 0;
}