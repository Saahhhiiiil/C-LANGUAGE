#include <stdio.h>

float temp(float celcius);

int main(){
    printf("temperature is : %f",temp(30));
    return 0;
}
float temp (float celcius){
   float far = celcius * (9.0/5.0) + 32;
   return far;
}