//list in reverse order
#include <stdio.h>
int main(){
    int i;
    printf("enter the numbr ");
    scanf("%d",&i);
    for(int a=i;a;a--){
        printf("%d\n",a);
    }
    return 0;
}