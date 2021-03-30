#include <stdio.h>
struct node
{
    int hour;
    int minute;
} p[100];
int main()
{
    // int n;
    // scanf("%d", &n);
    // for (int i = 0; i < n; i++)
    // {
    //     scanf("%d:%d", &p[i].hour, &p[i].minute);
    // }
    // int minute = 15, hour = 13;
    // for (int i = 0; i < n; i++)
    // {
    //     p[i].hour += hour;
    //     p[i].minute += minute;
    //     if (p[i].hour >= 24)
    //     {
    //         p[i].hour %= 24;
    //     }
    //     if (p[i].minute >= 60)
    //     {
    //         int hs = p[i].minute / 60;
    //         p[i].hour += hs;
    //         p[i].minute %= 60;
    //     }
    //     printf("%d:%d\n", p[i].hour, p[i].minute);
    // }
    int num;
    float num1 = 3, num2 = 2;
    num = num1 / num2;
    printf("%d", num);
    return 0;
}
