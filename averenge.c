#include<stdio.h>
int main()
{
    int a,c;
    float b;
    float d;
    scanf("%d\n",&a);
    for(c=1;c<=a;c++)
    {
        scanf("%f",&b);
        d=d+b;
    }
    printf("%.2f\n",d/a);
    return 0;
}