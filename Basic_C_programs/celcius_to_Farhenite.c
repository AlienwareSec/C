//celcius to farhenite
#include <stdio.h>
int main(){
    float celcius;
    printf("temp in celcius = ");
    scanf("%f",&celcius);
    float fahrenheit=celcius*1.8+32;
    printf("temp in Fahrenheit %f",fahrenheit);
    return 0;
}