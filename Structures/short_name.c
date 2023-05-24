#include <stdio.h>
#include <string.h>

typedef struct computerengeneeringstudent{
    int roll;
    float cgpa;
    char name [100];
}coe;

int main(){
    coe s1;

    s1.roll = 1;
    s1.cgpa = 7.5;
    strcpy(s1.name , " sahil");

    printf("student name : %S", s1.name);

    return 0;
}