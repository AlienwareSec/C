#include <stdio.h>
int m10(int a);
int main(){
    int a;
    scanf("%d",&a);
    m10(a);
    printf("%d",a);
    return 0;
}
int m10(int a){
    a=a*10;
    return a;
}