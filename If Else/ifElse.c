#include <stdio.h>
// if else 

int main (){
     int marks;
    printf("enter marks :");
    scanf("%d",&marks);

    if(marks>=90){
        printf("A++");
    }
    else if (marks>=80 && marks<90){
        printf("A+");
    }
    else if (marks>=70 && marks<80){
        printf("A");
    }
    else if (marks>=60 && marks<70){
        printf("B++");
    }
    else if (marks>=50 && marks<60){
        printf("B");
    }
    else {
        printf("fail");
    }
    return 0;
}
   