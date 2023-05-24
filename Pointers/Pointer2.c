#include <stdio.h>

int main(){
    int x;
    int *ptr;

    ptr = &x; //address of x is stored in variable ptr
    *ptr = 3; //value stored in pointer ptr is 3

    printf("value of x = %d \n",x);
    printf("value of *ptr = %d \n",*ptr);

    *ptr += 5;
    printf("value of x = %d \n",x);
    printf("value of *ptr = %d \n",*ptr);

    (*ptr)++;
    printf("value of x = %d \n",x);
    printf("value of *ptr = %d \n",*ptr);



    return 0;
}