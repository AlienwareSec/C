//Method 1:
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
//Method 2:
#include <stdio.h>
int main(){
    char ch;
    printf("Enter the character : ");
    scanf("%c",&ch);
    if(ch=='a')
    printf("it is a vowel");
    else if(ch=='a')
    printf("it is a vowel");
    else if(ch=='e')
    printf("it is a vowel");
    else if(ch=='i')
    printf("it is a vowel");
    else if(ch=='o')
    printf("it is a vowel");
    else if(ch=='u')
    printf("it is a vowel");
    else if(ch=='A')
    printf("it is a vowel");
    else if(ch=='E')
    printf("it is a vowel");
    else if(ch=='I')
    printf("it is a vowel");
    else if(ch=='O')
    printf("it is a vowel");
    else if(ch=='U')
    printf("it is a vowel");
    else
    printf("It is a consonant");
    return 0;
}