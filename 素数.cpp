#include <stdio.h>
int main()
{
    // 素数 除了1和本身外无因数 2 3 5
    for (int i = 1; i <= 100; i++)
    {
        if (i == 2)
            printf("%d ", 2);
        if (i % 2 != 0)
        {
            bool flag = true;
            for (int j = 2; j < i; j++)
            {
                if (i % j == 0)
                {
                    flag = false;
                    break;
                }
            }
            if (flag)
                printf("%d ", i);
        }
    }
    return 0;
}