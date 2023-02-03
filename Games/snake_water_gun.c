#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int snakewatergun(char you,char comp){
    if (you==comp){
        return 0;
    }
    if(you=='s' && comp=='w'){
        return 1;
    }
    else if(you=='w' && comp=='s'){
        return -1;
    }
    if(you=='s' && comp=='g'){
        return -1;
    }
    else if(you=='g' && comp=='s'){
        return 1;
    }
    if(you=='g' && comp=='w'){
        return -1;
    }
    else if(you=='w' && comp=='g'){
        return 1;
    }
}
int main(){
    char you,comp;
    srand(time(0));
    int num=rand()%100+1;
    if(num<33){
        comp='s';
    }
    else if(33<num && num<66){
        comp='w';
    }
    else{
        comp='g';
    }
    printf("Enter 's' for snake, 'w' for water, 'g' for gun = ");
    scanf("%c",&you);
    int r=snakewatergun(you,comp);
    printf("You chose %c and the computer chose %c\n",you,comp);
    switch(r){
        case 0: printf("It's a Draw");
        break;
        case 1: printf("You Win");
        break;
        case -1: printf("You Lose");
        break;
    }
    return 0;
}