#include <stdio.h>
typedef struct date{
    int date;
    int month;
    int year;
}date;
int datecompare(date d1,date d2){
    if(d1.year>d2.year){
        return 1;
    }
    if(d1.year<d2.year){
        return -1;
    }
    if(d1.month>d2.month){
        return 1;
    }
    if(d1.month<d2.month){
        return -1;
    }
    if(d1.date>d2.date){
        return 1;
    }
    if(d1.date<d2.date){
        return -1;
    }
    else
    return 0;
}
int main(){
    date d1,d2;
    printf("enter the date : ");
    scanf("%d",&d1.date);
    printf("enter the month : ");
    scanf("%d",&d1.month);
    printf("enter the year : ");
    scanf("%d",&d1.year);
    printf("enter the date : ");
    scanf("%d",&d2.date);
    printf("enter the month : ");
    scanf("%d",&d2.month);
    printf("enter the year : ");
    scanf("%d",&d2.year);
    printf("Date = %d/%d/%d\n",d1.date,d1.month,d1.year);
    printf("Date = %d/%d/%d\n",d2.date,d2.month,d2.year);
    int a= datecompare(d1,d2);
    printf("date compare function returns %d",a);
    return 0;
}