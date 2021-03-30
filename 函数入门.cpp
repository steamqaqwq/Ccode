#include <stdio.h>
// 递归求阶乘之和
long long int jie(int n)
{
    // 0! = 1
    if (n == 0)
    {
        return 1;
    }
    else
    {
        return n * jie(n - 1);
    }
}
int main()
{
    int n;
    // while (scanf("%d", &n) != EOF)
    // {
    //     long int Sn = 0;
    //     if (n > 20)
    //     {
    //         printf("Error,n<=20");
    //         continue;
    //     }
    //     for (int i = 1; i <= n; i++)
    //     {
    //         Sn += jie(i);
    //     }
    //     printf("%ld\n", Sn);
    // }
    long long int Sn = 0;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        Sn += jie(i);
    }
    printf("%lld\n", Sn);
    return 0;
}