#include<stdio.h>

int sum(int a , int b );
int prod(int a , int b );
int sub(int a , int b );
int div(int a , int b );

int main(){
    int a , b ;
    char c;

    printf("enter s for sum , m for subtract , p for product , d for division : ");
    scanf("%c",&c);

    printf("enter a : ");
    scanf("%d",&a);

    printf("enter b : ");
    scanf("%d",&b);   

    if(c == 's'){
        printf("the sum is : %d\n", sum (a , b));
    } 
    else if(c == 'm'){
        printf("the difference is : %d\n",sub(a , b));
    } 
    else if(c == 'p'){
        printf("the product is : %d\n",prod(a , b));
    } 
    else if(c == 'd'){
        printf("the divison is : %d\n",div(a , b));
    } 
    else {
        printf("please enter the right parameter");
    }
    
    return 0;
}
int sum(int a , int b ){
     int s = a + b;
        return s ;
}
int prod(int a , int b ){
        int p = a*b;
        return p;
}   
int sub(int a , int b ){
       int m = a-b;
        return m;
}
int div(int a , int b ){
       int d = a/b;
        return d;
}