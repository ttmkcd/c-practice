#include <stdio.h>

int max(int a, int b)          // 定义函数：返回 a、b 中较大的那个
{
    if (a > b) {
        return a;            // a 大就返回 a
    } else {
        return b;            // 否则返回 b
    }
}

int main()
{
    int a, b, c;
    a = 5;
    b = 6;
    c = max(10, 12);         // c = 12
    c = max(a, b);           // c = 6  （覆盖了上面的 12）
    c = max(c, 23);          // c = 23 （又覆盖了 6）
    max(23, 45);             // 调用了一次，但结果没用上，等于白调用
    printf("%d\n", max(a,b)); // 打印 6
}
