#include<stdio.h>

//write a program in c to print the fibonacci series using iteration

int main(){
    int n , first , second , fib ;
    first = 0 ;
    second = 1;
    printf("enter number : ");
    scanf("%d", &n);
    printf("Fibonacci Series is : \n");

    for (int i = 0; i <n ; i++ ){
        if(i<=1){
            fib = i;
            printf("%d",fib);
        }
        else{
            fib = first + second;
            first = second;
            second = fib;
            printf("%d ",fib);
        }
        printf("\n");
    }
    return 0;
}