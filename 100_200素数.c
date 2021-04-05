#include <stdio.h>
int main()
{
    for (int i = 100; i <= 200; i++)
    {
        if (i % 2 == 0) //偶数一定不为素数
            continue;
        int flag = 0; //设置素数旗帜 0是 1不是
        for (int j = 2; j < i; j++)
        {
            if (i % j == 0) //若i有因数 则不是素数
                flag = 1;
        }
        if (flag == 0)
            printf("%d ", i);
    }
}