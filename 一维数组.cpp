#include <stdio.h>
// TEST
// int main()
// {
//     int n;
//     scanf("%d", &n);
//     int arr[n];
//     int s = 0;
//     for (int i = 1; i <= n; i++)
//     {
//         arr[i] = i;
//     }
//     for (int i = 1; i <= n; i++)
//     {
//         s += arr[i];
//     }

//     printf("%d\n", s);
//     return 0;
// }
// D - 陶陶摘苹果
// int main()
// {
//     int n, taoh;
//     int arr[10];
//     // 100 200 111 222 110 117 119 120 121 125
//     for (int i = 0; i < 10; i++)
//     {
//         scanf("%d", &arr[i]);
//     }
//     scanf("%d\n", &taoh);
//     for (int i = 0; i < 10; i++)
//     {
//         if (arr[i] <= taoh)
//         {
//             printf("can touch %d\n", arr[i]);
//         }
//     }
//     return 0;
// }

int main()
{
    int appleh[10], benchh, taoh, bentaoh, i;
    benchh = 30;             //板凳的高度
    for (i = 0; i < 10; i++) //循环输入苹果的高度
    {
        scanf("%d", &appleh[i]);
    }
    scanf("%d", &taoh);      //输入淘淘的高度
    bentaoh = benchh + taoh; //淘淘站在板凳上的高度
    int n = 0;
    for (i = 0; i < 10; i++) //判断能否摘到苹果
    {
        if (appleh[i] <= bentaoh)
        {
            n++; //如果能够摘到苹果计数加一
        }
    }
    printf("%d\n", n);
    return 0;
}