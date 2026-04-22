#include<stdio.h>
int main()
{
    float a;
    float b;
    char c;
    while(scanf("%f%c%f",&a,&c,&b)!=EOF)
    if(c!='+'&&c!='-'&&c!='*'&&c!='/')
    {
        printf("Invalid operation!\n");
    }
    else if(c=='/'&&b==0.0000)
    {
        printf("Wrong!Division by zero!\n");
    }
    else if(c=='+')
        {
           printf("%.4f+%.4f=%.4f\n",a,b,a+b);  
        }
    else if(c=='-')
        {
            printf("%.4f-%.4f=%.4f\n",a,b,a-b);
        }
    else if(c=='*')
        {
            printf("%.4f*%.4f=%.4f\n",a,b,a*b);
        }
    else if(c=='/')
        {
            printf("%.4f/%.4f=%.4f\n",a,b,a/b);
        }
    return 0;
}