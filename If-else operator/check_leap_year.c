//CHECK LEAP YEAR
#include <stdio.h>
int main(){
    int year;
    printf("enter the year you want to check = ");
    scanf("%d",&year);
    if(year%400==0){
        printf("leap year");
    }
    else if(year%100==0){
        printf("not leap year");
    }
    else if(year%4==0){
        printf("leap year");
    }
    else
    printf("not leap year");

    return 0;
}