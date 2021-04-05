#include <stdio.h>

void change2D(int a[3][3], int b[3][3])
{
    // int temp;
    int count = 0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            b[j][i] = a[i][j];
        }
    }
}
int main()
{
    int a[3][3], b[3][3];
    int *p = &a[0][0];
    for (int i = 0; i < 9; i++)
    {
        scanf("%d", p + i);
    }
    change2D(a, b);
    int count = 0;
    for (int j = 0; j < 3; j++)
    {
        for (int k = 0; k < 3; k++)
        {
            if (count++ % 3 == 0)
            {
                printf("\n");
            }
            printf(" %d ", b[j][k]);
        }
    }
}