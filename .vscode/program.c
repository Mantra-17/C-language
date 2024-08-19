#include<stdio.h>

int main() {
    int arr[3];

    float n;
    printf("please show the number of electricity units consumed by you\n");
    scanf("%f", &n);
    int total=0;
    int subtotal=0;
    
    if(n<=50 && n>=0) {
        
        printf("%f\n", arr[0]=n*0.50);
        subtotal+=arr[0];
    }
    else if(n>50 && n<=150) {
        printf("%f\n", arr[1]=n*0.75);
        
        subtotal+=arr[1];
    }
    else if(n>150 && n<=250) {
        printf("%f\n",arr[2]= n*1.20);
        subtotal+=arr[2];
    }
    else {
        printf("%f\n",arr[3]= n*1.50);
        subtotal+=arr[3];
    }
 
    printf("your electricity bill for current month is %f\n", subtotal+(0.20*subtotal));
    return 0;
}