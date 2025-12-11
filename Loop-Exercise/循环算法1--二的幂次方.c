
/*
        给你一个整数 n，请你判断该整数是否是 2 的幂次方
        举例:
            n = 1 输出: yes 2的0次方
            n = 2 输出: yes 2的1次方
            n = 3 输出: no
            n = 4 输出: yes 2的2次方yes
            n = 5 输出: no
*/
#include <stdio.h>
int main() {
    int n, count = 0;
    printf("请输入整数n：");
    scanf("%d", &n);

    if (n <= 0) {
        printf("no\n");
        return 0;
    }

    int temp = n;
    while (temp % 2 == 0 && temp > 1) {
        temp /= 2;
        count++;
    }

    if (temp == 1) {
        printf("yes 2的%d次方\n", count);
    }
    else {
        printf("no\n");
    }

    return 0;
}
