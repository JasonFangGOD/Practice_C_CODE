#include<stdio.h>
int main()
{
	float k[K];
	int i,j;
	float temp = 0.0;
	printf("请输入28个实数:\n");
	for (i = 0; i < K; i++)
	{
		printf("请输入第%d个数：", i + 1);
		scanf("%f", &k[i]);
	}
	for (i = 0; i < K-1; i++)
	{
		for (j = 0; j < K-i; j++)
		{
			if (k[j] < k[j + 1])
			{
				temp = k[j];
				k[j] = k[j + 1];
				k[j + 1] = temp;
			}
		}
	}
	for (i = 0; i < K; i++)
	{
		if (i % 4 == 0)
		{
			printf("\n");
		}
		printf("%-10f", k[i]);
	}
	return 0;
}