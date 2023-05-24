#include <stdio.h.>

//change in argument doesn't affects change the original value

void printPrice(float value);

int main(){
    float value = 100;
    printPrice(value);
    printf("original value : %f \n",value);    //original value
    return 0;
}


// call by value
void printPrice(float value){    //argument
    value = value + (0.18 * value);
    printf("final price : %f \n",value);  
}