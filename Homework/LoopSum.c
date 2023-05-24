#include <stdio.h>

// print the sum of all numbers between 5 to 50 (including 5 & 50)

int main(){
   int sum = 0 ;
   for ( int i = 5 ; i <= 50 ; i++){
    sum += i;
   }

   printf("the sum is : %d  \n", sum);

   return 0;
}