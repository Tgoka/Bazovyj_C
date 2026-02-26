#include <stdio.h>
void print_simple(int n)
{
	for (int i = 2; i <= n; i++)
		{
			for (;n%i == 0; n /= i)
			printf("%d ", i);			
		}	
}

int main()
{
	int n;
	scanf("%d", &n);
	print_simple(n);
	return 0;
}	
