#include <stdio.h>

int main() {
    long long a, b;

    // 读取两个整数
    scanf("%lld %lld", &a, &b);

    // 如果 a 小于 b，交换 a 和 b
    if (a < b) {
        long long temp = a;
        a = b;
        b = temp;
    }

    // 使用欧几里得算法计算最大公约数
    while (a != 0) {
        long long temp = a;
        a = b % a;
        b = temp;
    }

    // 输出最大公约数
    printf("%lld\n", b);

    return 0;
}