#include <stdio.h>

void changeV(int *num1, int *num2)
{
    // 指针直接改变内存地址 无需返回
    int c = *num1;
    *num1 = *num2;
    *num2 = c;
}
int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    // printf("first %p\n", a);
    // printf("second %p\n", b);
    changeV(&a, &b);
    // printf("first %d\n", a);
    // printf("second %d\n", b);
    printf("%d %d", a, b);
    return 0;
}