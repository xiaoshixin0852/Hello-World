#include<stdio.h>
int main()
{
    int a=10;
    int b=20;
    int c=30;
    int d = a>b?a:b;
    int e = c>d?c:d;
    printf("%d",e);
    return 0;
}