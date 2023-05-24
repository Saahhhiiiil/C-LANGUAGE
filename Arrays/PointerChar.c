#include <stdio.h>

//arithmetic uses in pointers (incremenetand decremenet operators)

int main(){
    char star = '*';
    char *ptr = &star;

    printf("ptr = %u \n",ptr);
    
    ptr++;  //memory size increases by 1bytes
    printf("ptr = %u \n",ptr);

    ptr--;  // memoruy size decreased by 1 bytes
    printf("ptr = %u \n",ptr);

    return 0;
}