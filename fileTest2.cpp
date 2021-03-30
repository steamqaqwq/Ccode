#include <stdio.h>
#define MaxSize 100

int main()
{
    FILE *fp;
    char str[MaxSize];
    fp = fopen("file2.txt", "r");
    if (!fp)
        puts("Fail to openl");
    else
        puts("OK");
    while (fgets(str, MaxSize, fp))
        printf("%s", str);

    ;
    fclose(fp);
    return 0;
}