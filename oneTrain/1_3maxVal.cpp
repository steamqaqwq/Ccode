#include <stdio.h>
// #include <math.h>

int main()
{
    int max(int x, int y); //如果函数在主函数后 需先声明
    int a, b, c;
    scanf("%d%d", &a, &b);
    c = max(a, b);
    printf("max=%d\n", c);
    return 0;
}

int max(int x, int y)
{
    if (x >= y)
    {
        return x;
    }
    else
    {
        return y;
    }
}