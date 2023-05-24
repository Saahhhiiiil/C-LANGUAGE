#include <stdio.h>

//Write a function to print "Hot" or "Cold" depending on the temperature user enters.


void hot ();
void cold ();

int main(){
    int n ;
    printf("enter temp : ");
    scanf("%d", &n);

    if(n >= 35){
        hot ();
    } else if (n <= 10){
        cold ();
    } else {
        printf ("normal \n");
    }
    return 0;
}

void hot (){
    printf("hot \n");
}
void cold (){
    printf("cold \n");
}