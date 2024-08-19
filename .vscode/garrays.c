#include<stdio.h> 

void printtable(int arr[][10], int n, int m, int number);


int main() {

    int table[2][10];
printtable(table, 0, 10, 2);//  0 ->index, 10->number of rows, 2->table of 2

printtable(table, 1, 10, 3);

for(int i = 0;i<10;i++) {
    printf("%d\t", table[0][i]);
}
for(int i = 0;i<10;i++) {
    printf("%d\t", table[1][i]);
}
printf("\n");
return 0;
}

void printtable(int arr[][10], int n, int m, int number) {
    for(int i = 0;i<m;i++) { // 0 to 10
    arr[n][i]=number*(i+1);
    }
}