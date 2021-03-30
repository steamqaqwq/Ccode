#include <stdio.h>
#include <string.h>
#define maxsize 10
struct student
{
    int num;
    char name[2];
    int score;
} stu[2];

int main()
{
    for (int i = 0; i < 2; i++)
    {
        printf("请输入第%d位学生\n", i + 1);
        scanf("%d%s%d", &stu[i].num, &stu[i].name, &stu[i].score);
    }
    if (stu[0].score > stu[1].score)
    {
        printf("学号%d姓名%s成绩%d\n", stu[0].num, stu[0].name, stu[0].score);
    }
    else
    {
        printf("学号%d,姓名%s成绩%d\n", stu[1].num, stu[1].name, stu[1].score);
    }
    return 0;
}
