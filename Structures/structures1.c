#include <stdio.h>
#include <string.h>

struct student {
    int roll ; 
    float cgpa;
    char name [100];
};
 int main (){
    struct student s1;
    s1.roll = 703;
    s1.cgpa = 7.3;
    strcpy(s1.name , "sahil");

    printf("%d\n",s1.roll);
    printf("%f\n",s1.cgpa);
    printf("%s\n",s1.name);

    return 0;
 }