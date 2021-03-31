#include <stdio.h>
#include <string.h>
char Sstrcpy(char *a, char *b)
{
    int m = 11, n1 = 4, n2 = 16;
    a = a + m;
    b = b + n1;
    while (n1 <= n2)
    {
        *a = *b;
        a++;
        b++;
        n1++;
    }
    *a = '\0';
};
int main()
{
    char a[40] = "My name is Li jilin";
    char b[40] = "Mr.Zhang Haoling is very happy";
    Sstrcpy(a, b);
    printf("%s", a);
    return 0;
}