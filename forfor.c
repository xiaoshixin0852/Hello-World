#include <stdio.h>
int main()
{
    int a=1;
    for(int i=1;i<=4;i++)
    {
    for(int b=a;b<=5;b++)
    {
    printf("%d\t",b*i);
    }
    printf("\n");
    }
    return 0;
}