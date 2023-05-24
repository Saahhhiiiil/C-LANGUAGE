#include <stdio.h>


// number is prime or not


int main(){
    int n;
    printf("enter number : ");
    scanf("%d", &n);

    if( n % 2 == 0){
        printf("prime\n");
    }
    else {
        printf("not prime \n");
    }

    return  0 ;
}