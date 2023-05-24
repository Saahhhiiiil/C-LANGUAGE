#include <stdio.h>
#include <math.h>  //math.h is a library function

// use library function to calculate the square of a number given by user

void power(double n);

int main(){
    float n;   //power only contains double value
    printf("enter number : ");
    scanf("%f",&n);

    power(n);

  return 0;
}
void power(double n){
    n = pow(n , 2);    //pow is a library function which only contains double value
    printf("%f \n",n);
}