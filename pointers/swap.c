#include <stdio.h>
void swap(int *i,int *j);
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    printf("a and b = %d and %d\n",a,b);
    swap(&a,&b);
    printf("a and b after swap = %d and %d",a,b);
    return 0;
}
void swap(int *i,int *j){
    int temp;
    temp=*i;
    *i=*j;
    *j=temp;
}