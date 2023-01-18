//multiplication table of n in reverse:
#include <stdio.h>
int main(){
    int i;
    scanf("%d",&i);
    for(int a=10;a>0;a--){
        printf("%d * %d = %d\n",i,a,i*a);
    }
    return 0;
}