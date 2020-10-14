#include <stdio.h>

void main()
{
	int i, j, k, l = 0, x=10;
	for (i = 1; i < x; i++) 
	{
		for (j = 1; j < x; j++) 
		{
			for (k = 1; k < x; k++) 
			{
				if (i != k&&i != j&&j != k)
				{
					printf_s("%d%d%d\n", i, j, k);
					l++;
				}
			}
		}
	}
	printf_s("all %d\n", l);
}