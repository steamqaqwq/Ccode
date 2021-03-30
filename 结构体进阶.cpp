#include <stdio.h>
struct student
{
    int num;
    char classname[10];
    char name[10];
    int chinese;
    int math;
    int english;
} stu[100];

int main()
{
    int n;
    float avg;
    int maxi;
    float maxgrade = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d %s %s %d %d %d",
              &stu[i].num, &stu[i].classname, &stu[i].name, &stu[i].chinese, &stu[i].math, &stu[i].english);
    }
    for (int i = 0; i < n; i++)
    {
        avg = (stu[i].chinese + stu[i].math + stu[i].english) / 3.0;
        // 算最大值
        if (avg > maxgrade)
        {
            maxgrade = avg;
            maxi = i;
        }
        printf("%s %.1f\n", stu[i].name, avg);
    }
    printf("%d %s %s %.1f %.1f %.1f %.1f\n", stu[maxi].num, stu[maxi].classname, stu[maxi].name, (float)stu[maxi].chinese, (float)stu[maxi].math, (float)stu[maxi].english, maxgrade);
    return 0;
}