//factorial of n numbers

#include<stdio.h>

int product(int n);


int main() {
printf("factorial is : %d\n", product(5));

return 0;
}

int product(int n) {
    
    if(n == 1) {
        return 1;
    }
    int productNm1 = product(n-1);
    int productN = productNm1*n;

    return productN;

}