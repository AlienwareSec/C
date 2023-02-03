#include <stdio.h>
typedef struct timestamp{
    int date,month,year,hour,minute,sec;
}ts;
int ts_compare(ts t,ts t1){
    if(t.date>t1.date)
    return 1;
    if(t.date>t1.date)
    return -1;
    if(t.month>t1.month)
    return 1;
    if(t.month>t1.month)
    return -1;
    if(t.year>t1.year)
    return 1;
    if(t.year>t1.year)
    return -1;
    if(t.hour>t1.hour)
    return 1;
    if(t.hour>t1.hour)
    return -1;
    if(t.minute>t1.minute)
    return 1;
    if(t.minute>t1.minute)
    return -1;
    if(t.sec>t1.sec)
    return 1;
    if(t.sec<t1.sec)
    return -1;
    else
    return 0;
}
int main(){
    ts t,t1;
    t.date=12,t.month=10,t.year=1978,t.hour=11,t.minute=45,t.sec=65;
    t1.date=12,t1.month=10,t1.year=1978,t1.hour=11,t1.minute=45,t1.sec=65;
    printf("timestamp 1 = %d/%d/%d %d-%d-%d\n",t.date,t.month,t.year,t.hour,t.minute,t.sec);
    printf("timestamp 2 = %d/%d/%d %d-%d-%d\n",t1.date,t1.month,t1.year,t1.hour,t1.minute,t1.sec);
    int a= ts_compare(t,t1);
    printf("timestamp function return : %d\n",a);
    return 0;
}