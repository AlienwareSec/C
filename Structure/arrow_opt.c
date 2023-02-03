#include <stdio.h>
#include <string.h>
struct employee
{
    int code;
    float salary;
    char name[20];
};

int main(){
    struct employee e1;
    struct employee *ptr;
    ptr=&e1;
    ptr->code=20;
    ptr->salary=452.26;
    strcpy(ptr->name,"pawan");
    printf("%d  %f  %s",e1.code,e1.salary,e1.name);
    return 0;
}