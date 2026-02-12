#include <stdio.h>

int main()
{
	int a, b;
	scanf("%d%d", &a, &b);
	for (int i = a; i <= b && i <= 100; i++)
	{
		printf("%d ", i*i);
	}
	return 0;
}

