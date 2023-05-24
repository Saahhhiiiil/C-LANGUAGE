#include <stdio.h>

// while loop

int main(){
    int n;
    printf("enter number : ");
    scanf("%d",&n);

    int i=0;
    while (i<=n){
        printf("%d \n",i);
        i++;
    }
    return 0;
}