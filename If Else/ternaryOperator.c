#include <stdio.h>

//ternary operators

int main(){
    int age;
    printf("enter the age : ");
    scanf("%d",&age);

    age>=18 ? printf("is an adult \n") : printf("is not an adult \n");

    return 0;
   
}