#include <stdio.h>
void sumAndaverage(int a,int b,int *sum,float *avg);
int main(){
    int a,b,sum;
    float avg;
    scanf("%d %d",&a,&b);
    sumAndaverage(a,b,&sum,&avg);
    printf("sum of 2 no. are = %d\n",sum);
    printf("avg of 2 no. are = %f",avg);
    return 0;
}
void sumAndaverage(int a,int b,int *sum,float *avg){
    *sum=a+b;
    *avg=*sum/2;
}