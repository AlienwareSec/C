//RESULT PASS || FAIL
#include <stdio.h>
int main(){
    int sub1,sub2,sub3,total;
    printf("sub1 marks = ");
    scanf("%d",&sub1);
    printf("sub2 marks = ");
    scanf("%d",&sub2);
    printf("sub3 marks = ");
    scanf("%d",&sub3);
    total=(sub1+sub2+sub3)/3;
    if(total<40 || sub1<33 || sub2<33 || sub3<33){
        printf("your percentage is %d and you are fail\n",total);
    }
    else{
        printf("your percentage is %d and you are pass\n",total);
    }
    return 0;
}