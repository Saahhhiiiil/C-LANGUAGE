#include <stdio.h>

int main (){
    char ch;
    printf("enter character : ");
    scanf("%c",&ch);

    if(ch >= 'A' && ch <= 'Z'){
          printf("UPPERCASE \n");
    } else if (ch >= 'a' && ch <= 'z'){
        printf("LOWERCASE \n");
    }  else {
        printf("NOT A ENGLISH LETTER \n");
    }
    
      return 0;
    
}