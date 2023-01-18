//UPPER CASE || LOWER CASE:
#include <stdio.h>
int main(){
    char ch;
    printf("enter the character ");
    scanf("%c",&ch);
    if (ch>=97 && ch<=122){
        printf("lower case");
    }
    else
    printf("not lower case");
    return 0;
}