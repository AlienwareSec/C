#include <stdio.h>
int strlength(char *st){
    char *ptr=st;
    int len=0;
    while(*ptr!='\0'){
        len++;
        ptr++;
    }
    return len;
}
int main(){
    char st[50];
    char c;
    int i=0;
    while(c!='\n'){
        scanf("%c",&c);
        st[i]=c;
        i++;
    }
    st[i-1]='\0';
    int l=strlength(st);
    printf("the lenght of the string is %d",l);
    return 0;
}
