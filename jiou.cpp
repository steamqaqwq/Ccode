#include <stdio.h>

int bubble(int a[], int n)
{
    void swap(int *p1, int *p2);
    int i;                      //比较的轮数
    int j;                      //每轮比较的次数
    int buf;                    //交换数据时用于存放中间数据
    for (i = 0; i < n - 1; ++i) //比较n-1轮
    {
        for (j = 0; j < n - 1 - i; ++j) //每轮比较n-1-i次,
        {
            if (a[j] > a[j + 1])
            {
                swap(&a[j], &a[j + 1]);
            }
        }
    }
    return 111;
}
void swap(int *p1, int *p2)
{
    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}
int main()
{
    int n = 5, *q;
    int arr[n], arrOdd[5], arrEven[5];
    int oddCount = 0, evenCount = 0;
    q = &arr[0];
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", q + i);
    }
    for (int i = 0; i < 5; i++)
    {
        printf("%d,", *(arr + i) % 2);
        if (*(arr + i) % 2 == 0)
        {
            arrEven[evenCount++] = *(arr + i);
        }
        else
        {
            arrOdd[oddCount++] = *(arr + i);
        }
    }
    bubble(arrEven, evenCount);
    printf("\n------%d---%d----\n", evenCount, oddCount);
    for (int i = 0; i < oddCount; i++)
    {
        printf("%d \n", arrOdd[i]);
    }
    for (int i = 0; i < evenCount; i++)
    {
        printf("%d \n", arrEven[i]);
    }

    return 0;
}