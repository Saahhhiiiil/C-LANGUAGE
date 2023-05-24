#include <stdio.h>

int main (){
    int price[3]={90 , 91, 92}; //initialisation of array 2
    
    printf("total price of 1 : %f \n",price[0]+(0.18*price[0]));
    printf("total price of 1 : %f \n",price[1]+(0.18*price[1]));
    printf("total price of 1 : %f \n",price[2]+(0.18*price[2]));
    return 0;
}
