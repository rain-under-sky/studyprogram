#include <stdio.h>
#include <time.h>
int main(void)
{
	int a[10] = {0};			//��ʼ����
	int	i, j, k, n;				//����
	i = k = n = 0;
	int temp = 0;				//��ʱ����
	double average, meadian; 
	int mode;// ����ƽ��������λ��������

	//����������ַ�
	printf("please input 10 number:\n");
	for (i = 0; i < 10; i++)
	{
		scanf_s("%d", &a[i]);
	}

	for (i = 0; i < 9; i++) //����
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
	for (k = 0; k < 10; k++)// ��ӡ������ɵ�����
	{
		printf("%d  ", a[k]);
	}
	

	for (i = 0; i < 10; i++)//��ƽ��ֵ
	{
		temp += a[i];
	}
	average = temp / 10;
	printf("\nthe average number is =%.2lf\n", average);

	//����λ��
	meadian = ((double)a[4] + (double)a[6]) / 2.0;
	printf("the meadian unmber is =%.2lf\n", meadian);
	//������
 	for (i = 0; i < 10; i++)
	{
		k = 0;
		for (j = i + 1; j < 10; j++)
		{
			if (a[i] == a[j])
			{
				k++; //��¼ÿһλ���ֵĴ���
				i = j; //���ٲ���Ҫ���ظ�
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