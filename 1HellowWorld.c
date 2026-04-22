// #include<stdio.h>
// int main()
// {
//     printf("HellowWorld");
//     return 0;
// }

// #include<stdio.h>
// #include<ctype.h>
// int main()
// {
//     char c;
//     c=getchar();
//     while(c!='\n')
//     {
//     if(!(isalpha(c)))
//     putchar(c);
//     else
//     {
//     if((c>='W'&&c<='Z')||(c>='w'&&c<='z'))
//     printf("%c",c-22);
//     else
//     printf("%c",c+4);
//     }
//     c=getchar();
//     }
//     return 0;
// }

/*数组*/
// #include<stdio.h>
// int main()
// {
//     int i,group[10];
//     for(i=0;i<=9;i++)
//     group[i]=i;
//     for(i=9;i>=0;i--)
//     printf("%d ",group[i]);
//     printf("\n");
//     return 0;
// }

/*斐波那契数列*/
// #include<stdio.h>
// int main()
// {
//     int i;int f[20]={1,1};
//     for(i=2;i<20;i++)
//     f[i]=f[i-2]+f[i-1];
//     for(i=0;i<20;i++)
//     {
//         if(i%5==0)printf("\n");
//         printf("%12d",f[i]);
//     }
//     printf("\n");
//     return 0;
// }

/*ABCDEFGHIJKLMNOPQRSTUVWXYZABCD...*/
// #include<stdio.h>
// int main()
// {
//     int n,i,j;
//     char a='A';
//     scanf("%d",&n);
//     for(i=1;i<=n;i++)
//     {for(j=1;j<=n;j++,a++)
//     {if(a<='Z')
//     printf("%c",a);
//     else j--,a=a-27;}
//     printf("\n");
//     a=(char)(65+i);}
//     return 0;
// }

/*99乘法表*/
// #include<stdio.h>
// int main()
// {
//     int i,j;
//     for(i=1;i<=9;i++)
//     {for(j=1;j<=i;j++)
//     {printf("%d*%d=%2d ",j,i,j*i);}
//     printf("\n");}
//     return 0;
// }

/*金字塔*/
// #include<stdio.h>
// int main()
// {
//     int n,i,j,k;
//     scanf("%d",&n);
//     for(i=0;i<n;i++)
//     {for(j=1;j<n-i;j++)
//     {printf(" ");}
//      for(k=1;k<i+2;k++)
//      printf("* ");
//      printf("\n");}
//     return 0;
// }

/*空心三角形*/
// #include<stdio.h>
// int main()
// {
//     int n,i,j,k;
//     scanf("%d",&n);
//     for(i=1;i<=n;i++)
//     {
//     if(i==n)
//     {for(j=1;j<=n;j++)
//     printf("* ");}
//     else
//     {for(k=1;k<=2*i;k++)
//     {if(k==1||k==2*i-1)
//     printf("*");
//     else
//      printf(" ");}}
//     printf("\n");}
//     return 0;
// }

/*数字三角形*/
// #include<stdio.h>
// int main()
// {
//     int n,i,j;
//     scanf("%d",&n);
//     for(i=1;i<=n;i++)
//     {for(j=1;j<=i;j++)
//     {printf("%d ",j);}
//     printf("\n");}
//     return 0;
// }

/*质数表*/
// #include<stdio.h>
// int main()
// {
//     int n,i,a,b,sum=0;
//     scanf("%d",&n);
//     b=2;
//     while(b!=n+1)
//     {
//     for(i=2;i<b;i++) 
//     {a=b%i;
//     if(a==0) sum++;}
//          if(sum==0)
//          printf("%d ",b);
//     b++,sum=0;
//     }
//     return 0;
// }

/*X形图案*/
// #include<stdio.h>
// int main()
// {
//     int n,i,j;
//     scanf("%d",&n);
//     for(i=0;i<n;i++)
//     {for(j=0;j<n;j++)
//     {if(i==j||i+j==n-1)
//     printf("*");
//     else printf(" ");}
//     printf("\n");}
//     return 0;
//     }

/*求有多少组（X，Y，Z）满足等式2X + 3Y + 5Z = 100 ，X，Y，Z取值范围为【-30，+30】*/
// #include<stdio.h>
// int main() {
//     int count = 0;
//     // 枚举 Z 的可能取值
//     for(int Z = -30; Z <= 30; Z++) {
//         // 枚举 Y 的可能取值
//         for(int Y = -30; Y <= 30; Y++) {
//             // 计算 X
//             int X = (100 - 3 * Y - 5 * Z)/2;
//             if(X >= -30&&X<=30&&(100-3*Y-5*Z)%2==0) {
//                 count++; // 每找到一组解就计数
//             }
//         }
//     }
//     // 输出满足条件的组合数
//     printf("%d\n", count);
//     return 0;
// }

/*鸡兔同笼*/
// #include <stdio.h>
// int main() {
//     int n, m;
//     scanf("%d %d", &n, &m);
//     // 解方程
//     int y = (m - 2 * n) / 2;  // 兔子的数量
//     int x = n - y;            // 鸡的数量
//     // 检查解的合理性
//     if (m % 2 != 0 || y < 0 || x < 0) {
//         printf("No answer!");
//     } else {
//         printf("%d %d", x, y);
//     }
//     return 0;
// }

/*10个数排大小 冒泡排序*/
//注意双层循环中只有外层循环计次用到了j变量
//循环内容条件比较和数组交换下标都是i和i+1
// #include<stdio.h>
// int main()
// {
// int a[10]; int i,j,t;
// printf("input 10 numbers :\n");
// for(i=0;i<10;i++) scanf("%d",&a[i]);
// printf("\n");
// for(j=0;j<9;j++)
// for(i=0;i<9-j;i++)
// if(a[i]>a[i+1])
// {t=a[i];a[i]=a[i+1];a[i+1]=t;}
// printf("the sorted numbers :\n");
// for(i=0;i<10;i++) printf("%d ",a[i]);
// printf("\n");
// return 0;
// }

/*数组行列互换*/
// #include<stdio.h>
// int main()
// {
//     int m,n;
//     int a[2][3]={{1,2,3},{4,5,6}};
//     int b[3][2];
//     for(n=0;n<3;n++)
//     for(m=0;m<3;m++) 
//     b[n][m]=a[m][n];
//     for(n=0;n<3;n++)
//     {for(m=0;m<2;m++)
//     {printf("%d ",b[n][m]);}
//     printf("\n");}
//     return 0;
// }

/*菱形图案*/
// #include<stdio.h>
// int main()
// {
//     int n,i,j,k;
//     scanf("%d",&n);
//     for(i=0;i<n;i++)
//     {for(j=0;j<n-i;j++) printf(" ");
//      for(k=1;k<i+2;k++) printf("* ");
//      printf("\n");}
//     for(i=n;i>=0;i--)
//     {for(j=n-i;j>=1;j--) printf(" ");
//      for(k=i+1;k>0;k--) printf("* ");      
//       printf("\n");}
//     return 0;
// }

/*字符数组*/
// #include<stdio.h>
// int main()
// {
// char a[10]="happy";
// printf("%c\n",a[0]);
// printf("%s\n",a);
// printf("%s\n",a+1);
// printf("%s\n",&a[1]);
// return 0;
// }

/*有穷状态自动机*/
// #include<stdio.h>
// int main()
// {
//     char a[81],c;
//     int i,num=0,word=0;
//     gets(a);
//     /*scanf("%s",&a[0]);*/
//     printf("%s\n",a);
//     puts(a);
//     for(i=0;(c=a[i])!='\0';i++)
//     {
//         if(c==' ') word=0;
//         else if(word==0)
//         {
//             word=1;
//             num++;
//         }
//     }
//     printf("%d words\n",num);
//     return 0;
// }

/*三个字符串比大小*/
// #include<stdio.h>
// #include<string.h>
// int main()
// {
//     char str[3][10];
//     char string[10];
//     int i;
//     for(i=0;i<3;i++) gets(str[i]);
//     if(strcmp(str[0],str[1])>0)
//     strcpy(string,str[0]);
//     else
//     strcpy(string,str[1]);
//     if(strcmp(str[2],string)>0);
//     strcpy(string,str[2]);
//     printf("\nthe largest:\n%s\n",string);
//     return 0;
// }

/*函数定义*/
// #include<stdio.h>
// int main()
// {
//     void print_star();
//     void print_message();
//     print_star(); print_message();
//     print_star();
//     return 0;
// }
// void print_star()
// { printf("******************\n");}
// void print_message()
// { printf(" How do you do!\n");}

/*定义函数求最大*/
/*精度不一样会会被强转到函数定义类型*/
// int max(int x,int y)
// {
//     int z;
//     if (x > y) z = x;
//     else z = y;
//     return(z);
// }
// #include<stdio.h>
// int main()
// {
//     int max(int x,int y);
//     int a,b,c;
//     scanf("%d %d",&a,&b);
//     c= max(a,b);
//     printf("max=%d\n",c);
//     return 0;
// }

/*有序数列判断*/
// #include<stdio.h>
// int main()
// {
//     int n,i,t=0,sum=0,sump=0;
//     int a[1000];
//     scanf("%d",&n);
//     for(i=0;i<n;i++)
//     {
//         scanf("%d",&a[i]);
//     }
//     for(i=1;i<n;i++)
//     {
//         if(a[i]>a[i-1]) t++;
//         else if(a[i]<a[i-1]) sum++;
//         else sump++;
//     }
//     if(t==n-1||sum==n-1||sump==n-1)
//     printf("sorted");
//     else printf("unsorted");
//     return 0;
// }

/*数组最大数位置*/
// #include<stdio.h>
// int main()
// {
//     int n,i,max=0,t;
//     int a[1000];
//     scanf("%d",&n);
//     for(i=0;i<n;i++)
//     {
//         scanf("%d",&a[i]);
//         if(a[i]>max) 
//         {t=i;max=a[i];}
//     }
//     printf("%d",t+1);
//     return 0;
// }

/*出现次数最多的整数及其出现次数*/
// #include<stdio.h>
// int main()
// {
//     int a[1000],b[1001]={0},i,j,n,max=0,t;
//     scanf("%d",&n);
//     for(i=0;i<n;i++) scanf("%d",&a[i]);
//     for(i=0;i<n;i++)
//     for(j=0;j<1001;j++)
//     if(a[i]==j) b[j]++; 
//     for(j=0;j<1001;j++)
//     if(b[j]!=0)
//     if(b[j]>max) 
//     {t=j;max=b[j];}
//     printf("%d %d\n",t,b[t]);
//     return 0;
// }

/*嵌套函数求四个数最大值*/
// #include<stdio.h>
// long long max2(long long a,long long b)
// {
//     if(a>=b)
//     return a;
//     else
//     return b;
// }
// long long max4(long long a,long long b,long long c,long long d)
// {
//     long long m;
//     m=max2(a,b);
//     m=max2(m,c);
//     m=max2(m,d);
//     return (m);
// }
// int main()
// {
//     long long w,x,y,z,max;
//     scanf("%lld %lld %lld %lld",&w,&x,&y,&z);
//     max=max4(w,x,y,z);
//     printf("%lld",max);
//     return 0;
// }

/*老鹰抓小鸡*/
// #include<stdio.h>
// int main()
// {
//     int n,k,i,j,t,a[1000];
//     scanf("%d%d",&n,&k);
//     for(i=0;i<n;i++) a[i]=i+1;
//     for(j=0;j<k;j++)
//     {
//     t=a[0];
//     printf("%d: ",j+1);
//     for(i=0;i<n;i++)
//     {
//         printf("%d ",a[i]);
//     }
//     for(i=0;i<n;i++)
//     {
//         if(i!=n-1) a[i]=a[i+1];
//         else if(i==n-1) a[n-1]=t;
//     }
//     printf("\n");
//     }
//     return 0;
// }

/*递归函数*/
// #include<stdio.h>
// int main()
// {
//     int age(int n);/*可以先调用，但是得声明*/
//     printf("NO.5,age:%d\n",age(5));
//     return 0;
// }
// int age(int n)/*int n对应的是age括号里输入的数*/
// {
//     int c;
//     if(n==1) c=10;
//     else c=age(n-1)+2;/*age里套age*/
//     return (c);
// }

/*求出矩阵的最大值及所在的行号和列号*/
// #include<stdio.h>
// int main()
// {
//     int n,i,j,t=0,max=0;
//     scanf("%d",&n);
//     int a[20][20]={0},b[20]={0},c[20]={0};
//     for(i=0;i<n;i++)
//     for(j=0;j<n;j++)
//     {
//     scanf("%d",&a[i][j]);
//     if(a[i][j]>b[i]) 
//     {b[i]=a[i][j];c[i]=j;} 
//     }
//     for(i=0;i<n;i++)        
//     if(b[i]>max) 
//     {t=i; max=b[i];}
//     printf("%d %d %d",max,t+1,c[t]+1);
//     return 0;
// }

/*鞍点：所在行的最大值所在列的最小值*/
// #include<stdio.h>
// int main()
// {
//     int m,n,i,j,t=0;
//     scanf("%d %d",&m,&n);
//     int a[100][100]={0},b[100]={0},c[100]={1001},d[100]={0};
//     for(i=0;i<m;i++)
//     for(j=0;j<n;j++)
//     scanf("%d",&a[i][j]);
//     for(i=0;i<m;i++)
//     for(j=0;j<n;j++)
//     if(a[i][j]>b[i]) 
//     {b[i]=a[i][j];d[i]=j;}
//     for(j=0;j<n;j++)
//     for(i=0;i<m;i++)
//     if(a[i][j]<c[j]) 
//     c[j]=a[i][j];
//     for(i=0;i<m;i++)
//     for(j=0;j<n;j++)
//     if(a[i][d[i]]==c[j])
//     {
//     printf("%d %d %d\n",i+1,j+1,a[i][d[i]]);
//     t=1;
//     }
//     if(t==0) printf("No");
//     return 0;
// }

/*字符串（不含空格）长度*/
// #include<stdio.h>
// int main()
// {
//  char a[100];
//  int i=0;
//  while((a[i]=getchar())!='\n')
//  i++;
//  a[i]='\0';
//  printf("%d",i);
//  return 0; 
// }

/*字符串（不含空格）长度(C专用)*/
// #include<stdio.h>
// #include<string.h>
// int main()
// {
//  char a[100]="\0";
//  int i=0;
//  gets(a);
//  printf("%d",strlen(a));
//  return 0; 
// }

/*优美字符串*/
// #include<stdio.h>
// int main()
// {
//  char a[10][100000];
//  int T,i,j,t;
//  scanf("%d\n",&T);/*\n表示键盘缓冲区*/
//  for(j=0;j<T;j++)
//  {
//  i=0;t=0;
//  while((a[j][i]=getchar())!='\n')
//  {
//  t++;
//  if(i!=0&&a[j][i-1]==a[j][i]) t++;
//  i++;
//  }
//  printf("%d\n",t);
//  }
//  return 0; 
// }

/*静态局部变量*/
// #include<stdio.h>
// int main()
// {
//     int f(int t);
//     int a=2,i;
//     for(i=0;i<3;i++)
//     printf("%d\n",f(a));
//     return 0;
// }
// int f(int a)
// {
//     auto int b=0;
//     static int c=3;
//     b=b+1;
//     c=c+1;
//     return(a+b+c);
// }

/*十进制转二进制，高位不含0，B结尾*/
// #include<stdio.h>
// int main()
// {
//     int n;
//     int a[32]={0};
//     int i,j;
//     scanf("%d",&n);
//     if(n==0) printf("0");
//     else if(n<0)
//     {
//      printf("-");
//      n*=-1;
//     }
//     for(i=0;n!=0;i++)
//     {
//      a[i]=n%2;
//      n/=2;
//     }
//     for(j=i-1;j>=0;j--)
//     printf("%d",a[j]);
//     printf("B");
//     return 0;
// }

/*杨辉三角形*/
// #include<stdio.h>
// int main()
// {
//     int a[30][30], n, i, j;
//     scanf_s("%d", &n);
//     for (i = 0; i <n; i++)
//         for (j = 0; j <= i; j++)
//             a[i][j] = 1;
//     for (i = 2; i < n; i++)
//         for (j = 1; j <=i-1 ; j++)
//             a[i][j] = a[i - 1][j - 1] + a[i - 1][j];
//     for (i = 0; i < n; i++)
//     {
//         for (j = 0; j <= i; j++)
//             printf("%5d", a[i][j]);
//          printf("\n");
//     }
//     return 0;
// }

/*宝石：字符对应价格*/
// #include<stdio.h>
// int main()
// {
//  int T;
//  scanf("%d\n",&T);
//  char n;
//  int i,price=0;
//  for(i=0;i<T;i++)
//  {
//  while((n=getchar())!='\n')
//  price=price+n-64;
//  printf("%d\n",price);
//  price=0;
//  }
//  return 0;
// }

/*字典排序（车）（C）*/
// #include<stdio.h>
// #include<string.h>
// int main()
// {
//  char S[20][20];
//  char t[20];
//  int n,i,j;
//  scanf("%d\n",&n);
//  for(i=0;i<=n-1;i++) {gets(S[i]);}
//  for(j=0;j<=n-1;j++)
//  for(i=0;i<=n-2;i++)
//  if(strcmp(S[i],S[i+1])>0)
//  {strcpy(t,S[i]);strcpy(S[i],S[i+1]);strcpy(S[i+1],t);}
//  for(i=0;i<n;i++) puts(S[i]);
//  return 0;
// }

/*字典排序（C）*/
// #include<stdio.h>
// #include<string.h>
// int main()
// {
//  char S[20][20];
//  char t[20];
//  int n,i,j;
//  scanf("%d\n",&n);
//  for(i=0;i<n;i++) gets(S[i]);
//  for(j=0;j<n-1;j++)
//  for(i=0;i<n-1-j;i++)
//  if(strcmp(S[i],S[i+1])>0)
//  {strcpy(t,S[i]);strcpy(S[i],S[i+1]);strcpy(S[i+1],t);}
//  for(i=0;i<n;i++) puts(S[i]);
//  return 0;
// }

/*回文拼接*/
// #include<stdio.h>
// #include<string.h>
// int main()
// {
//  char S[10000];
//  int i,j,k,n,a;
//  scanf("%d\n",&n);
//  for(i=0;i<n;i++)
//  {
//  scanf("%s",S);
//  int length=strlen(S);
//  int flag=0;
//  for(a=2;a<length-1;a++)
//  {
//  int left=1,right=1;
//  for(j=0,k=a-1;j<k;j++,k--)
//  if(S[j]!=S[k]) left=0;
//  for(j=a,k=length-1;j<k;j++,k--) 
//  if(S[j]!=S[k]) right=0;
//  if(left==1&&right==1) flag=1;
//  }
//  if(flag) printf("Yes\n");
//  else printf("No\n");
//  }
//  return 0;
// }

/*组合数*/
// #include<stdio.h>
// int fact(int n)
// {
//     int i,k=1;
//     for(i=1;i<=n;i++)
//     k*=i;
//     return k;
// }
// int main()
// {
//     int n,m,k;
//     scanf("%d %d",&n,&m);
//     k=fact(n)/(fact(m)*fact(n-m));
//     printf("%d",k);
//     return 0;
// }

/*判断是否为素数并输出所有素因子*/
// #include<stdio.h>
// int judge(long long n)
// {
//     long long i;
//     for(i=2;i*i<=n;i++) 
//     if(n%i==0) 
//     return 0;
//     return 1;
// }
// int main()
// {
//     int t,x;
//     long long n,i;
//     scanf("%d",&t);
//     for(x=0;x<t;x++)
//     {
//     scanf("%lld",&n); 
//     int sum=0;
//     for(i=2;i*i<=n;i++) 
//     {
//     if(n%i==0)
//     {
//     if(sum==0)
//     {sum=1; printf("noprime\n");}
//     if(judge(i)) printf("%lld ",i);
//     if(i!=n/i&&judge(n/i)) printf("%lld ",n/i);
//     }
//     }
//     if(sum==0) printf("isprime\n%lld\n",n);
//     else printf("\n");
//     }
//     return 0;
// }

/*递归最大公约数*/
// #include<stdio.h>
// long long gcd(long long a, long long b) 
// {
//     if (b == 0) return a;
//     return gcd(b, a % b); 
// }
// int main() 
// {
//     long long x, y;
//     scanf("%lld %lld", &x, &y);
//     printf("%d\n", gcd(x, y));
//     return 0;
// }

/*递归次数*/
// #include<stdio.h>
// long long a=0;
// long long fact(long long f)
// {
//     a++; 
//     if( f <= 0 )
//     printf("%lld\n",a);
//     else 
//     return fact(f - 1) * f;
//     return 0 ;
// }
// int main()
// {
//     long long n;
//     scanf("%lld",&n);
//     fact(n);
//     return 0;
// }

/*函数数组求最大值*/
// #include<stdio.h>
// int fact(int n,int a[])/*形参数组可以不用大小*/
// {
//     int i,max=0;
//     for(i=0;i<n;i++)
//     max=(a[i]>max?a[i]:max); 
//     return max;
// }
// int main()
// {
//     int n,i;
//     scanf("%d",&n);
//     int a[n];
//     for(i=0;i<n;i++)
//     scanf("%d",&a[i]);
//     printf("%d",fact(n,a));/*传入实参直接用数组名*/
//     return 0;
// }

/*汉诺塔*/
// #include<stdio.h>
// void print(int n,char x,char y)
// {
// printf("%d: %c -> %c\n",n,x,y);
// }
// void move(int n,char start,char temp,char end)
// {
// if(n==1) 
// print(n,start,end);
// else
// {
// move(n-1,start,end,temp);
// print(n,start,end);
// move(n-1,temp,start,end);
// }
// }
// int main()
// {
//     int n;
//     char a,b,c;
//     scanf("%d %c %c %c",&n,&a,&b,&c);
//     move(n,a,b,c);
//     return 0;
// }

/*组合数求字母组串*/
// #include<stdio.h>
// int fact(int n)
// {
//     int i,k=1;
//     for(i=1;i<=n;i++)
//     k*=i;
//     return k;
// }
// int combination(int n,int m)
// {
//     int k;
//     k=fact(n)/(fact(m)*fact(n-m));
//     return k;
// }
// int main()
// {
//     int a, b, c, n;
//     scanf("%d %d %d %d", &a, &b, &c, &n);
//     int count = 0;
//     for (int x = 0; x <= a && x <= n; x++)
//     for (int y = 0; y <= b && x + y <= n; y++)
//     {
//     int z = n - x - y;
//     if (z <= c && z >= 0)
//     count += combination(n, x) * combination(n - x, y);
//     }
//     printf("%d\n", count);
//     return 0;
// }

/*十进制转R进制*/
// #include<stdio.h>
// int main()
// {
//     long long n;
//     int r;
//     int a[100];
//     int i,j;
//     scanf("%lld %d",&n,&r);
//     for(i=0;n!=0;i++)
//     {
//      a[i]=n%r;
//      n/=r;
//     }
//     for(j=i-1;j>=0;j--)
//     if(a[j]>=10) printf("%c",'A'+a[j]-10);
//     else printf("%d",a[j]);
//     return 0;
// }

/*递归分解因数*/
// #include<stdio.h>
// int count;
// void f(int a,int n)
// {
//     int i;
//     for(i=a;i<n;i++)
//     {
//     if(n%i==0&&i<=n/i)
//     {
//     count++;
//     f(i,n/i);
//     }
//     if(i>n/i)
//     break;
//     }
// }
// int main()
// {
//     int a, n,i;
//     scanf("%d", &n);
//     for(i=0;i<n;i++)
//     {
//     count =1;
//     scanf("%d",&a);
//     f(2,a);
//     printf("%d\n",count);
//     }
//     return 0;
// }

/*递归快速排序法*/
// #include<stdio.h>
// void quickSort(long long a[],long long n)
// {
//     long long temp;
//     long long left=0,right=n-1;
//     long long s=a[0];
//     if(n>1)
//     {
//     while(left!=right)
//     {
//     while(a[left]<=s&&left<right)
//     left++;
//     while(a[right]>=s&&left<right)
//     right--;
//     temp=a[right];
//     a[right]=a[left];
//     a[left]=temp;
//     }
//     if(a[0]>a[left])
//     {
//     a[0]=a[left];
//     a[left]=s;
//     }
//     quickSort(a,left);
//     quickSort(a+left,n-left);
//     }
//     else return;
// }
// int main()
// {
//     long long n;
//     scanf("%lld",&n);
//     long long a[n];
//     for(int i=0;i<n;i++)
//     scanf("%lld",&a[i]);
//     quickSort(a,n);
//     for(int i=0;i<n;i++)
//     printf("%lld ",a[i]);
//     return 0;
// }

/*结构体工资表*/
// #include<stdio.h>
// struct SalaryTable
// {
//   char Name[10];
//   int s1; int s2;
//   int s3; int s4;
//   int sum;
// };
// int main()
// {
//     struct SalaryTable salarys[6]=
//     {{"张三",8000,5200,1000,-2000,0},{.Name="李四",5000,4230,800,500,0},
//     {"王五",9000,3200,2300,260,0},{"朱八",5000,500,100,-200,0},
//     {"郭七",5000,3800,500,500,0},{"高六",8000,1350,500,-600,0}};
//     for(int i=0;i<6;i++)
//     {
//         salarys[i].sum=salarys[i].s1+salarys[i].s2+salarys[i].s3+salarys[i].s4;
//     }
//     for(int j=0;j<5;j++)
//     for(int i=0;i<5-j;i++)
//     if(salarys[i].sum<salarys[i+1].sum)
//     {
//         struct SalaryTable salary;
//         salary=salarys[i];   salarys[i]=salarys[i+1]; salarys[i+1]=salary;
//     }
//     for(int l=0;l<6;l++)
//     {
//         printf("%-10s %10d %10d %10d %10d %10d\n",
//             salarys[l].Name,salarys[l].s1,salarys[l].s2,salarys[l].s3,salarys[l].s4,salarys[l].sum);
//     }
//     return 0;
// }

