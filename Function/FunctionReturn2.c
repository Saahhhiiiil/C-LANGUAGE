#include <stdio.h>
#include <math.h>

float squareArea (float side);
float circleArea (float rad);
float rectangleArea ( int a , int b);

int main(){
    float side , rad , a , b;
    printf("enter side : ");
    scanf("%f",&side);
    printf("%f \n",squareArea(side));

    printf("enter radius :  \n");
    scanf("%f",&rad);
    printf("%f \n",circleArea(rad));

    printf("enter a : \n ");
    scanf("%f",&a);
    printf("enter b :  \n");
    scanf("%f",&b);
    printf("%f \n",rectangleArea(a , b));

    return 0;


}

float squareArea (float side){
   return pow(side , 2);
}
float circleArea (float rad){
    return 3.14 * pow(rad , 2);
}
float rectangleArea ( int a , int b){
    return a*b;
}