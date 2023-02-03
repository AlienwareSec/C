#include <stdio.h>
#include <string.h>
struct employee{
    int code;
    float salary;
    char name[20];
};
int main(){
    struct employee e1,e2,e3;
        // e1.code=100,e1.salary=300.25,strcpy(e1.name,"Pawan");
        // e2.code=200,e2.salary=420.542,strcpy(e2.name,"Diakshi");
        // e3.code=300,e3.salary=320.54,strcpy(e3.name,"Alien");
    scanf("%d %f %s",&e1.code,&e1.salary,e1.name);
    scanf("%d %f %s",&e2.code,&e2.salary,e2.name);
    scanf("%d %f %s",&e3.code,&e3.salary,e3.name);
    printf("CODE  SALARY  NAME\n");
    printf("----  ------  -----\n");
    printf("%d  %0.2f  %s\n",e1.code,e1.salary,e1.name);
    printf("%d  %0.2f  %s\n",e2.code,e2.salary,e2.name);
    printf("%d  %0.2f  %s\n",e3.code,e3.salary,e3.name);
    return 0;
}