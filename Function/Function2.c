#include <stdio.h>

//write a function that prints namaste for indian and bonjour for french

void namaste ();
void bonjour ();

int main(){
    char n ;
    printf("enter i for indian or f for french : ");
    scanf("%c", &n);

    if(n == 'i'){
        namaste();
    } else if (n == 'f'){
        bonjour ();
    } else {
        printf ("not a valid country \n");
    }
    return 0;
}

void namaste (){
    printf("namaste \n");
}
void bonjour (){
    printf("bonjour \n");
}