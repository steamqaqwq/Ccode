#include <stdio.h>
int x, y;
void num()
{
    int a = 15, b = 10;
    x = a + b;
    y = a + b;
    return;
}
int main()
{
    int n = 4;
    while (n--)
    {
        printf("%d", --n);
    }
    // printf("%d,%d", x, y);
}