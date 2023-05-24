#include <stdio.h>

int main(){
    int arr[3][2]={{1 ,2},{3,4},{5,6}};

    for(int i = 1 ; i<= 2 ; i++){
        for (int j = 1 ; j<= 3 ; j++){
            printf("element at [%i][%i]:",i , j);
            printf("%d\n",arr[i][j]);
        }
    }
    return 0;
}