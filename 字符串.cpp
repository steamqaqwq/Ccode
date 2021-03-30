// 字符分类
#include <stdio.h>
#include <string.h>

// int main()
// {
//     char str[100] = {0};
//     char letter[100] = {0};
//     char num[100] = {0};
//     char other[100] = {0};
//     scanf("%s", str);
//     int l_id = 0, n_id = 0, o_id = 0;
//     for (int i = 0; i < strlen(str); i++)
//     {
//         if (str[i] >= 'a' && str[i] <= 'z')
//         {
//             letter[l_id++] = str[i];
//         }
//         else if ('0' <= str[i] && str[i] <= '9')
//         {
//             num[n_id++] = str[i];
//         }
//         else if (str[i] >= 'A' && str[i] <= 'Z')
//         {
//             letter[l_id++] = str[i];
//         }
//         else
//         {
//             other[o_id++] = str[i];
//         }
//     }
//     printf("%s\n", letter);
//     printf("%s\n", num);
//     printf("%s\n", other);

//     return 0;
// }

// 字符翻转
// int main()
// {
//     char str[100];
//     scanf("%s", str);
//     int j = strlen(str);
//     int i = 1;
//     while (i <= j)
//     {
//         printf("%c", str[j - i]);
//         i++;
//     }
//     return 0;
// }

// 字符移动 数字移动最后 其余顺序不变
int main()
{
    char str[100] = {0};
    char letter[100] = {0};
    char num[100] = {0};
    // char other[100] = {0};
    scanf("%s", str);
    int l_id = 0, n_id = 0, o_id = 0;
    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            letter[l_id++] = str[i];
        }
        else if ('0' <= str[i] && str[i] <= '9')
        {
            num[n_id++] = str[i];
        }
        else if (str[i] >= 'A' && str[i] <= 'Z')
        {
            letter[l_id++] = str[i];
        }
        else
        {
            letter[l_id++] = str[i];
        }
    }
    strcat(letter, num);
    puts(letter);
    return 0;
}
