#include <stdio.h>
// 任取8个球 必有其一
int main()
{
    int red, white, black;
    printf("红球,白球,黑球\n");
    for (red = 0; red <= 3; red++)
        for (white = 0; white <= 5; white++)
            for (black = 1; black <= 6; black++)
                if ((red + black + white == 8))
                    printf("%d,%d,%d\n", red, white, black);
}