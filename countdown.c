#include<stdio.h>
#include<unistd.h>

int main()  {


int n;
printf("enter the seconds");
scanf("%d", &n);

for(int i=n;i>=0;i--) {
    printf("%d\n", i);
    sleep(1);
}

}