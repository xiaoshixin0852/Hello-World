#include <stdio.h>

int main()
{
    char a[20];  // 存放用户名
    char b[20];  // 存放密码
    
    // 使用while循环读取多组输入
    while(scanf("%s %s", a, b) != EOF) {
        // 判断输入的用户名和密码是否都为 "admin"
        if(a[0] == 'a' && a[1] == 'd' && a[2] == 'm' && a[3] == 'i' && a[4] == 'n' && a[5] == '\0' &&
           b[0] == 'a' && b[1] == 'd' && b[2] == 'm' && b[3] == 'i' && b[4] == 'n' && b[5] == '\0') {
            printf("Login Success!\n");
        } else {
            printf("Login Fail!\n");
        }
    }
    
    return 0;
}