// #include <stdio.h>
// #define SUM 100000
// int main()
// {float amount,aver,total; int i;
//  for(i=1,total=0;i<=1000;i++)
//  {printf("please enter amount:");
//  scanf("%f",&amount);
//  total=total+amount;
//  if(total>=SUM)break;
// }
// aver=total/i;
// printf("mun=%d\naver=%10.2f\n",i,aver);
// return 0;
// }
#include <stdio.h>
int main ()
{
for(int n=100;n<=200;n++)
{ if(n%3==0)
   continue;
   printf("%d\n",n);
}
return 0;
}