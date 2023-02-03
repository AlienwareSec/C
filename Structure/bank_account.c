#include <stdio.h>
typedef struct bank_account{
    int acc_no;
    char name[15];
    char surname[15];
    int balance;
}bank_acc;
void display(bank_acc c){
    printf("%d   %s %s   %d\n",c.acc_no,c.name,c.surname,c.balance);
}
int main(){
    bank_acc acc[2];
    for(int i=1;i<=2;i++){
        printf("enter the account number : ");
        scanf("%d",&acc[i].acc_no);
        printf("enter the name : ");
        scanf("%s",&acc[i].name);
        printf("enter the last name : ");
        scanf("%s",&acc[i].surname);
        printf("enter the balance : ");
        scanf("%d",&acc[i].balance);
    }
    printf("acc_no.  name  lastname  balance\n");
    for (int i=1;i<=2;i++){
    display(acc[i]);
    }
    return 0;
}