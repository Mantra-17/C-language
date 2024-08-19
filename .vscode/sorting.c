#include<stdio.h>

int main() {
    int a[10];
    
    printf("Enter 10 nums : ");
    
    for(int i = 0; i < 10; i++){
        scanf("%d", &a[i]);
    }
    
    
    for(int i = 0; i < 9; i++){
        for(int j = i + 1; j < 10; j++){
            int temp;
            if(a[i] > a[j]){
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    
    
    printf("Sorted nums: ");
    for(int i = 0; i < 10; i++){
        printf("%d\n ", a[i]);
    }
    printf("\n");
    return 0;
}