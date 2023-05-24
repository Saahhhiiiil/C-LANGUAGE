#include <stdio.h>

//function table

void  PrintTable (int n);

int  main (){
    int n;

    printf("enter n : ");
    scanf("%d", &n);

    PrintTable(n);   //variable n is argument or actual parameter

    return 0;
}
void PrintTable(int n){   //int n is parameter
    for(int i = 1 ; i <= 10 ; i++){
        printf("%d \n",i*n);
    }
}