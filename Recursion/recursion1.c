#include <stdio.h>

//recursion

void sahil(int count);

int main(){
    sahil (10);
}


//recursive function
void sahil (int count){
    if(count == 0 ){
        return;
    }
    printf("sahil \n");
    sahil (count-1);
}