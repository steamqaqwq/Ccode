#include <stdio.h>
// int main()
// {
//     // 杨辉三角
//     int a[21][21] = {0};
//     int n;
//     while (scanf("%d", &n) != EOF)
//     {
//         if (n == 0)
//         {
//             break;
//         }
//         a[1][1] = 1;
//         for (int i = 2; i <= n; i++)
//         {
//             for (int j = 1; j <= i; j++)
//             {
//                 a[i][j] = a[i - 1][j] + a[i - 1][j - 1];
//             }
//         }
//         for (int i = 1; i <= n; i++)
//         {
//             for (int j = 1; j <= i; j++)
//             {
//                 printf("%d ", a[i][j]);
//             }
//             printf("\n");
//         }
//     }
//     return 0;
// }

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n][n];
    // n*n 矩阵翻转 3*3
    // 1 2 3       7 8 9
    // 4 5 6  ->   4 5 6
    // 7 8 9       1 2 3
    int arrCount = 0;
    int s = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            arr[i][j] = s;
            printf("%d ", arr[i][j]);
            if (arrCount < n - 1)
            {
                arrCount += 1;
            }
            else
            {
                arrCount = 0;
                printf("\n");
            }
            s += 1;
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            s1 = arr[i]
        }
        for (int j = 0; j < n; i++)
    }
    for (int i = 0; i < 3)
        return 0;
}