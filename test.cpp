#include<stdio.h>
int main()
{
int a=1,b=2,c=3,d=4,i;
int *p[4]={&a,&b,&c,&d};
  printf("%d",*p[2]);

    return 0;
}

/*取出每一位数*/
// #include <stdio.h>
// int main()
// {
//     int sum=0,a,b;
//     scanf("%d",&a);
//     while(a!=0)
//     {
//         b=a%10;
//         sum=b+sum;
//         a=a/10;
//     }
//     printf("%d",sum);
//     return 0;
// }

// #include<stdio.h>
// int main()
// {
//     char a = '\n', b = '0' ;
//     printf("%d\n", b ^ a & -1 | 0); 
//     printf("%d \n", 3>8>7<10 );
//     printf("%d\n", -9%-4);
//     return 0;
// }

//  #include<stdio.h>
//  int main()
// {
// int *p;
// double *pd;
// long long *pll;
// char *pc;
// p=NULL;
// pd=NULL;
// pll=NULL;
// pc=NULL;
// printf("%d %d %d\n",sizeof(p),sizeof(*p),p+1);
// printf("%d %d %d\n",sizeof(pd),sizeof(*pd) ,pd+1);
// printf("%d %d %d\n",sizeof(pll),sizeof(*pll) ,pll+1);
// printf("%d %d %d\n",sizeof(pc),sizeof(*pc) ,pc+1);


// int a = 10;
// int *p = &a;
// *p =100; 
// printf("a= %d\n",*p); 
// *p+=55; 
// printf("a= %d\n",a);
// (*p)++;
// printf("a= %d\n",a);
// int a = 10; 
// int* p = &a; 
// int** pp = &p; 
// a++;
// *p *= 5;
// printf("%d",**pp);
// unsigned  color = 0xff09aa;
// char* p = (char*)&color;
// printf("Blue:%hhu %02hhx\n",*p,*p);
// p++;
// printf("GREEN:%hhu %02hhx\n", *p, *p);
// p++; 
// printf("RED:%hhu %02hhx\n", *p, *p); 


// return 0;
// }

