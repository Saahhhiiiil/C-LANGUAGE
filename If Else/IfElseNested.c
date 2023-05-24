#include <stdio.h>

//nested if else

int main(){
    int number;
    printf("enter the number:");
    scanf("%d",&number);

    if(number >= 0){
        printf("positive \n");
          if(number % 2 == 0){
            printf("even \n");
          } else {
            printf("odd \n");
          }
    } else {
        printf("negative \n");
        if(number >= -10){
          printf("less negative");
        } else {
          printf("highly negative");
        }
    }
return 0;
}