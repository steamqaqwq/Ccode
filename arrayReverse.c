#include <stdio.h>

void reverse(int a[], int n)
{
    int *p = a;
    for (int i = 0, j = n - 1; i < j; i++, j--)
    {
        int temp = *(a + i);
        *(a + i) = *(a + j);
        *(a + j) = temp;
    }
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    reverse(arr, 10);
    for (int i = 0; i < 10; i++)
    {
        printf("%d", arr[i]);
    }
    return 0;
}