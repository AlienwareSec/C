#include <stdio.h>

void printNumbers(int n)
{
    if(n <= 50)
    {
        printf("%d ", n);
        printNumbers(n+1);
    }
}

int main()
{
    printNumbers(1);
    return 0;
}