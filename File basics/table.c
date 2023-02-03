#include <stdio.h>
int main(){
    int a;
    printf("Enter the number = ");
    scanf("%d",&a);
    FILE *ptr;
    ptr = fopen("table.txt","w");
    for(int i=1;i<=10;i++){
        fprintf(ptr,"%d x %d = %d\n",a,i,a*i);
    }
    return 0;
}