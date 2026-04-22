#include<stdio.h>
int main()
{
    int a,b,c,d,e,f,g;
    scanf("%d\n",&a);
    for(b=1;b<=a;b++)
    {
        scanf("%d %d %d %d\n",&c,&d,&e,&f);
        g=c+d+e+f;
    printf("%d\n",g);
    }
    return 0;
}