#include <stdio.h>

// do while loop

int main(){
    int n;
    printf("enter number : ");
    scanf("%d",&n);

    int i=10;
    do{
        printf("%d \n",i);
        i--;
    }while(i>=n);
    return 0;
}