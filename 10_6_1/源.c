#include <stdio.h>
#include <time.h>
int main(void)
{
	int a[10] = {0};			//初始变量
	int	i, j, k, n;				//计数
	i = k = n = 0;
	int temp = 0;				//临时计数
	double average, meadian; 
	int mode;// 定义平均数，中位数，众数

	//接收输入的字符
	printf("please input 10 number:\n");
	for (i = 0; i < 10; i++)
	{
		scanf_s("%d", &a[i]);
	}

	for (i = 0; i < 9; i++) //排序
	{
		for (k = 9; k > i; k--)
		{
			if (a[k] < a[k - 1])
			{
				temp = a[k];
				a[k] = a[k - 1];
				a[k - 1] = temp;
			}
		}
	}
	for (k = 0; k < 10; k++)// 打印排序完成的数字
	{
		printf("%d  ", a[k]);
	}
	

	for (i = 0; i < 10; i++)//求平均值
	{
		temp += a[i];
	}
	average = temp / 10;
	printf("\nthe average number is =%.2lf\n", average);

	//求中位数
	meadian = ((double)a[4] + (double)a[6]) / 2.0;
	printf("the meadian unmber is =%.2lf\n", meadian);
	//求众数
 	for (i = 0; i < 10; i++)
	{
		k = 0;
		for (j = i + 1; j < 10; j++)
		{
			if (a[i] == a[j])
			{
				k++; //记录每一位出现的次数
				i = j; //减少不必要的重复
			}
		}
		if (k > n)
		{
			if (k >= 1)
			{
				temp = a[i];
				n = k;
			}
		}
	}
	mode = temp;
	if(n >= 1  )
	{
		printf("the mode number is =%d\n", mode);
	}
	else 
	{
		printf("we can't find a mode unmber\n");
	}
}