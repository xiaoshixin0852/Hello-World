#include <stdio.h>
int main()
{
    char ch;
    scanf("%c",&ch);
    ch=(ch>='a'&&ch<='z')?(ch-32):ch;
    printf("%c\n",ch);
    return 0;
}