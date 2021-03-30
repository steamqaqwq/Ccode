#include <stdio.h>
#include <string.h>
struct candidate
{
    char name[10];
    int votes;
} candi[3] = {"xu1", 0, "xu2", 0, "xu3", 0};
int main()
{
    char n[10];
    int count = 0;
    while (count < 3)
    {
        scanf("%s", &n);
        for (int i = 0; i < 3; i++)
        {
            if (strcmp(candi[i].name, n) == 0)
            {
                candi[i].votes++;
            }
        }
        count++;
    }
    for (int i = 0; i < 3; i++)
    {
        printf("%s,%d\n", candi[i].name, candi[i].votes);
    }
    return 0;
}