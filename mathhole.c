#include <stdio.h>
int main()
{
    int a,b,c,d;
    int i=0;
    scanf("%d",&a);
    while(a!=495)
    {
    b=a%10;c=(a/10)%10;d=a/100;
    int t,e,f;
    if(b>c)
    {
        t=b;
        b=c;
        c=t;
    }
    if(c>d)
    {
        t=c;
        c=d;
        d=t;
    }
    if(b>c)
    {
        t=b;
        b=c;
        c=t;
    }
    e=b*100+c*10+d;
    f=d*100+c*10+b;
     a=f-e;
    i++;
    }
    printf("%d",i);
    return 0;
}