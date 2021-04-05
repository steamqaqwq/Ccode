#include <stdio.h>
int maxNum(int a[], int n)
{
    int max = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] > max)
            max = a[i];
    }
    return max;
}
int main()
{
    int a[3];
    for (int i = 0; i < 3; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("%d", maxNum(a, 3));
}