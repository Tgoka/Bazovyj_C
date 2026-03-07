#include <stdio.h>

int is_prime(int n, int delitel)
{
	if (n > 1)
	{
		if (delitel == 1)
		{
			printf("YES\n");
		}
		else if (n % delitel == 0)
		{
			printf("NO\n");
		}
		else
		{
			is_prime(n, delitel-1);
		}	
	}
	else if (n == 1)
	{
		printf("NO\n");
	}
	return 0;
}

int main(void)
{
	int n; 
	scanf("%d", &n);
	int delitel = n/2;
	return is_prime(n, delitel);
}
