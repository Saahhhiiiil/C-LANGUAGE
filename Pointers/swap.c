#include <stdio.h>

//swap of two numbers

void swap(int *a , int *b);

int main(){
    int x=2 , y=3;
    swap(&x , &y);
    printf("x=%d , y=%d\n",x , y);
    return 0;
}
void swap (int *a , int *b){
    int t = *a;
    *a = *b;
    *b = t;
    
}