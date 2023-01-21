#include <stdio.h>
void printTable(int *mulTable,int num){
    printf("Table of %d is given below\n",num);
    for(int i=0;i<10;i++){
        mulTable[i]=num*(i+1);
        printf("%d * %d = %d\n",num,i+1,mulTable[i]);
    }
    printf("\n*************\n");
}
int main(){
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    int mulTable[3][10];
    printTable(mulTable[0],a);
    printTable(mulTable[1],b);
    printTable(mulTable[2],c);
    return 0;

}