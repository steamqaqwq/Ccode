#include <stdio.h>
#include <string.h>
int main()
{
    char s[] = "9876", *p;
    for (p = s; p < s + 2; p++)
        printf("%s", *p);
    return 0;
}