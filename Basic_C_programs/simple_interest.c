// simple interest
#include <stdio.h>
int main(){
    int p,t;
    printf("principle amount = ");
    scanf("%d",&p);
    printf("time period = ");
    scanf("%d",&t);
    float ri;
    printf("rate of interest = ");
    scanf("%f",&ri);
    float si=(p*ri*t)/100;
    printf("simple interest =%f",si);
    return 0;
}