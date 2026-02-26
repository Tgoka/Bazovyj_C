#include <stdio.h>
int factorial(int n)
{
	if (n > 0 && n <= 20)
	{
		int i, x, y;
		for (i = 0, x = 1, y = 1; i != n; i++)
		{
			y = x * y;
			x++;
		}
		printf("%d ", y);
	}
	return 0;	
}

int main()
{
	int n;
	scanf("%d", &n);
	return factorial(n);	
}	
