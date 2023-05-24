#include <stdio.h>

//write a program in c to find greatest among three numbers



int main(){
    int a , b , c;
    printf("enter first number : ");
    scanf("%d",&a);

    printf("enter second number : ");
    scanf("%d",&b);

    printf("enter third number : ");
    scanf("%d",&c);
    
    if(a>=b && a>=c){
        printf("a is greatest");
    }
    else if (b>=a && b>=c){
        printf("b is greatest");
    }
    else{
        printf("c is greatest");
    }

    return 0;
}
