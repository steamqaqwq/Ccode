#include <stdio.h>
#include <math.h>

typedef struct medal
{
    int gold = 0, silver = 0, bronze = 0, total = 0;
    char name[10];
} Country;
void input(int n, Country country[])
{
    for (int i = 0; i < n; i++)
    {
        scanf("%s%d%d%d", &country[i].name, &country[i].gold,
              &country[i].silver,
              &country[i].bronze);
    }
}
void mes(int n, Country country[])
{
    for (int i = 0; i < n; i++)
    {
        printf("%s\n", country[i].name);
    }
}
int main()
{
    int N = 3;
    void count(int n, Country country[]);
    int output(int n, Country country[]);
    Country country[N];
    // (Country*)malloc(sizeof(Country)*N);
    input(N, country);
    count(N, country);
    output(N, country);
    mes(N, country);
    return 0;
}

void count(int n, Country country[])
{
    for (int i = 0; i < n; i++)
    {
        country[i].total = country[i].silver + country[i].gold + country[i].bronze;
    }
}
int output(int n, Country country[])
{
    int max = 0, maxi;
    for (int i = 0; i < n; i++)
    {
        if (country[i].total > max)
        {
            max = country[i].total;
            maxi = i;
        }
    }
    printf("奖牌数最多的国家是%s,共有%d奖牌\n", maxi, country[maxi].name, country[maxi].total);
    return max;
}