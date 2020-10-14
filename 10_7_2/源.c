#include <stdio.h>
int max(int a, int b)
{
	int x;
	if (a > b) 
	{
		x = a;
	}
	else 
	{
		x = b;
	}
	return x;
}


int main(void)
{
	int a, b;
	scanf_s("%d%d", &a, &b);
	printf("%d", max(a,b));
}

