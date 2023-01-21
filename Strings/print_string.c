#include <stdio.h>
int main(){
    char *str="This is STRING";
    printf("%s",str);
    return 0;
}
//Method 2
#include <stdio.h>
int main(){
    char str[]={'p','a','w','a','n','\0'};
    char *ptr=str;
    while(*ptr!='\0'){
        printf("%c",*ptr);
        ptr++;
    }
    return 0;
}