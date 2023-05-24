#include <stdio.h>
#include <math.h>

//Write a program to print the average of 3 numbers.//

int main (){
    int x,y,z;
   
    printf("enter the value of x: \n");
    scanf("%d",&x);
    
    printf("enter the value of y: \n");
    scanf("%d",&y);

    printf("enter the value of z: \n");
    scanf("%d",&z);
   
    printf("the average of x,y and z is: %d",(x+y+z)/3);
    

    return 0;
}