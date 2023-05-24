#include <stdio.h>

//pointers

int main (){
    int age = 22 ;
    int *ptr = &age ;

    //address


    //unsigned int
    printf("%u \n",&age);
    printf("%u \n",ptr);
    printf("%u \n",&ptr);

    //hexa decimal
    printf("%p \n",&age);
    printf("%p \n",ptr);
    printf("%p \n",&ptr);

    return 0;
}