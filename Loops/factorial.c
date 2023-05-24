#include <stdio.h>

//factorial of a number n

int main(){
    int n;
    printf("enter the number : ");
    scanf("%d",&n);

    int fact = 1;
    for( int i = 1 ; i <= n ; i++){
        fact = fact * i ;
    }
    printf(" the factorial is : %d \n", fact);
    return 0;
}