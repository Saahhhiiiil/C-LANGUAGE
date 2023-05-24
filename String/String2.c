#include <stdio.h>

int main(){
    char *canchange = "sahil";
    puts(canchange);
    canchange = "kumar";
    puts(canchange);

    char cannotchange []= "sahil";
    puts(cannotchange);
    cannotchange = "kumar";
    puts(cannotchange);

    return 0;
}