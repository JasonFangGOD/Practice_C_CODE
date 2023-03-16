#include<stdio.h>
int main()
{
    // 请在此输入您的代码
    int i = 0, j = 0, max=0;
    int num[26] = { 0 };//存放每个字母出现次数
    char arr[26];//单词存放数组
    scanf("%s", &arr);
    int sz = sizeof(arr) / sizeof(arr[0]);
    while (arr[i] != '\0')//到字符串尾结束循环
    {
        for (j = 0; j < sz; j++)//遍历数组，找出现次数
        {
            if (arr[i] == arr[j])
            {
                num[i]++;//记录单个字母出现次数
            }
        }
        i++;
    }
    for (i = 0; i < sz; i++)//比较出现最多的字母次数
    {
        max = i;
        for (j = i + 1; j < sz; j++)
        {
            if (num[max] < num[j])
            {
                max = j;
            }
        }
        break;
    }
    printf("%c\n%d\n", arr[max], num[max]);

    return 0;
}