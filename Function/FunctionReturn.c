#include <stdio.h>

// functions can be also used for return type data

int sum (int a , int b);

int main (){
    int a, b;

    printf("enter value of a : ");
    scanf("%d",&a);

    printf("enter value of b : ");
    scanf("%d",&b);

    int s = sum ( a , b);
    printf(" sum is : %d \n", s);

    return 0;
}

int sum (int x , int y){
    return x+y;
}