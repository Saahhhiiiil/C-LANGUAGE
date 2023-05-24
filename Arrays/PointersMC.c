#include <stdio.h>

//we can subtract two pointers and we can also compare two pointers

int main(){
    int age = 20;
    int _age =21;

    int *ptr = &age;
    int *_ptr = &_age;

    printf("subtract = %u \n",ptr - _ptr);

    _ptr = &age;
    printf("comparison = %u \n", ptr == _ptr);

    return 0;
}