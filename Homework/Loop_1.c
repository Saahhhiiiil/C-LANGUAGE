#include <stdio.h>

// print sum of n natural numbers and print them in reverse.

int main(){
    int n;
    printf("enter the number : ");
    scanf("%d",&n);

    int sum = 0 ;
    for(int i=1 ; i<=n ;i++){
        sum+=i;
    }
    printf("the required sum is : %d \n",sum);

    for(int i=n ; i>=1 ; i--){
        printf("%d \n",i);
    }

    return 0;
}