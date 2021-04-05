#include <stdio.h>
#include <string.h>
//选择法10 数组逆序 三个找最

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
void simpleSort(int a[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[j] < a[i])
                swap(&a[j], &a[i]);
        }
    }
}

int main()
{
    int a[10];
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", a + i);
    }
    simpleSort(a, 10);
    for (int i = 0; i < 10; i++)
    {
        printf("%d", a[i]);
    }

    return 0;
}