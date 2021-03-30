#include <stdio.h>

int main()
{
    int ten, ge;
    for (int i = 1; i <= 100; i++)
    {
        if (i / 10 == 0)
        {
            continue;
        }
        else
        {
            ten = i / 10;
            ge = i % 10;
            if (ten * ge > (ten + ge))
                printf("%d ", i);
        }
    }
    return 0;
}