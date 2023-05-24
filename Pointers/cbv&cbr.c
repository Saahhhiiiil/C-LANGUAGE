#include <stdio.h>

//pointers in function

void square (int n);
void _square (int *n);

int main(){
    int number = 5;
    square(number);
    printf("%d \n",number);

    _square(&number);
    printf("%d\n",number);

    return 0;
}

//call by value
void square (int n){
    n = n*n;
   printf("%d\n",n);
}

//call by function
void _square (int *n){
    *n = (*n)*(*n);
    printf("%d\n",*n);
    }