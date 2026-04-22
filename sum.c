// #include<stdio.h>
//  int main()
//  {
//     int a,b,sum;
//      a = 123;
//      b = 456;
//      sum = a + b;
//      printf("sum is %d\n",sum);
//      return 0;
//  }

#include<stdio.h>
float add(float x,float y)
{float z; 
 z=x+y;
 return (z);
}
int main()
{float a,b,c;
 printf("Please enter a and b:");
 scanf("%f,%f",&a,&b);
 c=add(a,b);
 printf("sum is %f\n",c);
 return 0;
}