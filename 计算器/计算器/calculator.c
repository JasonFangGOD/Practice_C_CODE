#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

menu()
{
	printf("�B��`��.���B�B`�����B1.��	����.���B�B`�����B��B\n");
	printf("�B��`��.���B�B`�����B2.��	����.���B�B`�����B��B\n");
	printf("�B��`��.���B�B`�����B3.��	����.���B�B`�����B��B\n");
	printf("�B��`��.���B�B`�����B4.��	����.���B�B`�����B��B\n");
	printf("�B��`��.���B�B`�����B0.��	����.���B�B`�����B��B\n");
}
test()
{
	int input = 0;
	do 
	{
		menu();
		printf("��ѡ��=> ");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			add();//�ӷ�
			printf("���������������ѡ�񡭡�\n\n");
			break;
		case 2:
			subt();//����
			printf("���������������ѡ�񡭡�\n\n");
			break;
		case 3:
			mult();//�˷�
			printf("���������������ѡ�񡭡�\n\n");
			break;
		case 4:
			divid();//����
			printf("���������������ѡ�񡭡�\n\n");
			break;
		case 0:
			printf("\n���˳�����������\n");
			break;
		default:
			printf("ѡ�����������ѡ��\n");
			break;
		}
	} while (input);
}
add()
{
	int i,in=0;
	float num[10]={0.0};
	float sum=0.0;
	printf("������Ҫ�Ӽ���=> ");
	scanf("%d", &in);
	for (i = 0; i < in; i++)
	{
		printf("����������=> ");
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
	printf("������Ҫ������=> ");
	scanf("%d", &in);
	printf("����������=> ");
	scanf("%f", &num[0]);
	sum = num[0];
	for (i = 1; i < in; i++)
	{
		printf("����������=> ");
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
	printf("������Ҫ�˼���=> ");
	scanf("%d", &in);
	for (i = 0; i < in; i++)
	{
		printf("����������=> ");
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
	printf("������Ҫ������=> ");
	scanf("%d", &in);
	printf("����������=> ");
	scanf("%f", &num[0]);
	sum = num[0];
	for (i = 1; i < in; i++)
	{
		printf("����������=> ");
		scanf("%f", &num[i]);
		if (num[i] == 0)
		{
			printf("\n����������Ϊ 0 !\n����������=> ");
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

