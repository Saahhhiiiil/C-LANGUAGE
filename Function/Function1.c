#include <stdio.h>

//write two functions - 1. to print "hello" 2.to print "goodbye"

void PrintHello ();  //prototype
void PrintGoodbye ();

int main (){
    PrintHello ();  //function call
    PrintGoodbye();

    return 0 ;
}

void PrintHello(){  //function definition
    printf("Hello \n");
}
void PrintGoodbye (){
    printf("GoodBye \n");
}