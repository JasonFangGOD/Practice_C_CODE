#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

menu()
{
	printf("˙☆`·.·˙˙`··˙1.加	法·.·˙˙`··˙☆˙\n");
	printf("˙☆`·.·˙˙`··˙2.减	法·.·˙˙`··˙☆˙\n");
	printf("˙☆`·.·˙˙`··˙3.乘	法·.·˙˙`··˙☆˙\n");
	printf("˙☆`·.·˙˙`··˙4.除	法·.·˙˙`··˙☆˙\n");
	printf("˙☆`·.·˙˙`··˙0.退	出·.·˙˙`··˙☆˙\n");
}
test()
{
	int input = 0;
	do 
	{
		menu();
		printf("请选择=> ");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			add();//加法
			printf("计算结束，请重新选择……\n\n");
			break;
		case 2:
			subt();//减法
			printf("计算结束，请重新选择……\n\n");
			break;
		case 3:
			mult();//乘法
			printf("计算结束，请重新选择……\n\n");
			break;
		case 4:
			divid();//除法
			printf("计算结束，请重新选择……\n\n");
			break;
		case 0:
			printf("\n已退出计算器……\n");
			break;
		default:
			printf("选择错误，请重新选择\n");
			break;
		}
	} while (input);
}
add()
{
	int i,in=0;
	float num[10]={0.0};
	float sum=0.0;
	printf("请输入要加几次=> ");
	scanf("%d", &in);
	for (i = 0; i < in; i++)
	{
		printf("请输入数字=> ");
		scanf("%f", &num[i]);
		sum = sum + num[i];
	}
	for (i = 0; i < in; i++)
	{
		printf("%f",num[i]);
		if (i != in-1)
		{
			printf("+");
		}
	}
	printf("=%f\n", sum);
}

subt()
{
	int i, in = 0;
	float num[10] = { 0.0 };
	float sum = 0.0;
	printf("请输入要减几次=> ");
	scanf("%d", &in);
	printf("请输入数字=> ");
	scanf("%f", &num[0]);
	sum = num[0];
	for (i = 1; i < in; i++)
	{
		printf("请输入数字=> ");
		scanf("%f", &num[i]);
		sum = sum - num[i];
	}
	for (i = 0; i < in; i++)
	{
		printf("%f", num[i]);
		if (i != in - 1)
		{
			printf("-");
		}
	}
	printf("=%f\n", sum);
}

mult()
{
	int i, in = 0;
	float num[10] = { 0.0 };
	float sum = 1.0;
	printf("请输入要乘几次=> ");
	scanf("%d", &in);
	for (i = 0; i < in; i++)
	{
		printf("请输入数字=> ");
		scanf("%f", &num[i]);
		sum = sum * num[i];
	}
	for (i = 0; i < in; i++)
	{
		printf("%f", num[i]);
		if (i != in - 1)
		{
			printf("*");
		}
	}
	printf("=%f\n", sum);
}

divid()
{
	int i, in = 0;
	float num[10] = { 0.0 };
	float sum = 0.0;
	printf("请输入要除几次=> ");
	scanf("%d", &in);
	printf("请输入数字=> ");
	scanf("%f", &num[0]);
	sum = num[0];
	for (i = 1; i < in; i++)
	{
		printf("请输入数字=> ");
		scanf("%f", &num[i]);
		if (num[i] == 0)
		{
			printf("\n被除数不能为 0 !\n请重新输入=> ");
			--i;
			continue;
		}
		sum = sum / num[i];
	}
	for (i = 0; i < in; i++)
	{
		printf("%f", num[i]);
		if (i != in - 1)
		{
			printf("/");
		}
	}
	printf("=%f\n", sum);
}

int main()
{
	test();
	return 0;
}

