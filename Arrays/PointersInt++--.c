#include <stdio.h>

//arithmetic uses in pointers (incremenetand decremenet operators)

int main(){
    int age = 10;
    int *ptr = &age;

    printf("ptr = %u \n",ptr);
    
    ptr++;  //memory size increases by 4 bytes
    printf("ptr = %u \n",ptr);

    ptr--;  // memoruy size decreased by 4 bytes
    printf("ptr = %u \n",ptr);

    return 0;
}