#include <stdio.h>
#include <string.h>
// 1.加密算法
// int main()
// {
//     char str[102];
//     // 字符一定要 '' 而非 ""
//     gets(str);
//     for (int i = 0; i < strlen(str); i++)
//     {
//         if (str[i] >= 'a' && str[i] <= 'z')
//         {
//             str[i] += 3;
//             if (str[i] > 'z')
//                 str[i] -= 26;
//         }
//         else if (str[i] >= 'A' && str[i] <= 'Z')
//         {
//             str[i] += 3;
//             if (str[i] > 'Z')
//                 str[i] -= 26;
//         }
//         else
//         {
//             continue;
//         }
//     }
//     // printf("%s\n", str);
//     puts(str);
//     return 0;
// }

// 2.最长连续因子
int main()
{
    int n;
    scanf("%d", &n);
    int maxC = 0;
    int curC = 0;
    int arr[n] = {0};
    int index = 0;

    for (int i = 2; i <= n / 2; i++)
    {
        // 可整除 因子
        if (n % i == 0)
        {
            // 以max 和cur比较 看是否录入数据
            if (maxC != 0 && maxC >= curC)
            {
                index = 0;
            }
            else
            {
                printf("%d\n", arr[index]);
                arr[index++] = i;
            }
            curC++;
        }
        else
        {
            if (curC > maxC)
            {
                maxC = curC;
            }
            curC = 0;
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            continue;
        }
        else
        {
            printf("%d ", i);
        }
    }
    return 0;
}