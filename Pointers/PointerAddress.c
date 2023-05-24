#include <stdio.h>

//checking the address

void print (int *n);
int main(){
    int n = 4;
    printf("%u \n",&n); //address 1
    print(&n);
    return 0;
}
void print (int *n){
    printf("%u \n",n);  //address 2
}