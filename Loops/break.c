#include <stdio.h>

// break in loop

int main(){
    int n;
    do{
        printf("enter number : ");
        scanf("%d",&n);
        printf("%d \n",n);

        if(n % 2 != 0){
            break;
        }
    } while (1);
    printf(" this is an odd number");
    return 0;

    
}