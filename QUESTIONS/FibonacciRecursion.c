#include <stdio.h>

//find the fibonacci seires by recursion

int fib(int n);

int main(){
    int n ;
    printf("enter the number = ");
    scanf("%d",&n);
    printf("the fibonacci series is : \n");

    for(int i = 0 ; i< n ; i++){
        printf("%d\n", fib(i));
    }
    return 0;
}
int fib(int n){
    if(n==0){
        return 0;
    }
    else if(n==1){
        return 1;
    }
    else{
        return fib (n-1)+fib (n-2);
    }
}