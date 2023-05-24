#include <stdio.h>

//sum of n natural numbers

int sum (int n);

int main(){
    printf("sum is:%d \n",sum(1));
    return 0;
}

int sum (int n) {
    if(n == 1){  //base case
        return 1;
    }
    int sumNm1 = sum (n-1);
    int sumN = sumNm1 + n;
    return sumN;
}