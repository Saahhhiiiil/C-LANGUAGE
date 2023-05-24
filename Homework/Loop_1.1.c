#include<stdio.h>

// print sum of n natural numbers and print them in reverse.

int main(){
    int n;
    printf("enter the number : ");
    scanf("%d",&n);

    int sum = 0;
    for(int i=1 , j=n ; i<=n && j>=1 ; i++ , j--){
        sum+=i;
        printf(" %d \n",j);
       }
        printf("the required sum is : %d \n",sum);
       
    return 0;
}