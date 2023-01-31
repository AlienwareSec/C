#include <stdio.h>
int main(){
    char ch;
    printf("Enter the character ");
    scanf("%c",&ch);
    if( ch==97 || ch==101|| ch==105||ch==111||ch==117)
    printf("Character is a lower cased vowel");
    else if(ch==65 || ch==69|| ch==73||ch==79||ch==85)
    printf("Character is a upper cased vowel");
    else
    printf("Character is a consonant");
    return 0;
}