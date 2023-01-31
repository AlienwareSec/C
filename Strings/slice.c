#include <stdio.h>
void slice(char *st,int a,int b){
    int i=0;
    while(i+a<b){
        st[i]=st[i+a];
        i++;
    }
    st[i]='\0';
}
int main(){
    char st[40];
    int a,b;
    printf("Enter the string: ");
    scanf("%s",&st);
    printf("Enter the slicing values a and b: ");
    scanf("%d %d",&a,&b);
    slice(st,a,b);
    printf("%s",st);
    return 0;
}