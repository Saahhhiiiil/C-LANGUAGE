#include <stdio.h>
#include <math.h>

void sqroot(double n);

int main(){
    int n =2;
    sqroot(n);
    return 0;
}

void sqroot(double n){
    n =  sqrt(n);
    printf("sqroot is : %f \n", n);
}