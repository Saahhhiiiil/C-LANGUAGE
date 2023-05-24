#include<stdio.h>


//2d arrays

int main(){
    int marks [2][3];  // marks of 2 students in 3 subjects

    marks[0][0]=90;  //marks for 1st student
    marks[0][1]=80;
    marks[0][2]=70;

    marks[1][0]=90;  //marks for 2nd student
    marks[1][1]=80;
    marks[1][2]=70;

    printf("%d",marks[0][1]);

    return 0;
}

//nothing