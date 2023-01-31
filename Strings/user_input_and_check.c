#include <stdio.h>
#include <string.h>
int main(){
    char st1[20];
    char st2[20];
    char c;
    int i=0;
    printf("value of string ");
    scanf("%s",st1);
    printf("value of 2nd string chr by chr\n");
    while(c!='\n'){
        fflush(stdin);
        scanf("%c",&c);
        st2[i]=c;
        i++;
    }
    st2[i-1]='\0';
    printf("value of st1 is %s\n",st1);
    printf("value of st2 is %s\n",st2);
    printf("strcmp for st1 and st2 returns %d",strcmp(st1,st2));
    return 0;
}