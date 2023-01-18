//C to F temperature:
#include <stdio.h>
float F(float x);
int main(){
    float c;
    printf("enter the temperature in celcius = ");
    scanf("%f",&c);
    printf("Temperature in Farenheit will be = %0.2f",F(c));
    return 0;
}
float F(float x){
    float p=(x*1.8)+32;
    return p;
}