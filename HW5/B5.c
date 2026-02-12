#include <stdio.h>

int main()
{
	int x;
	scanf("%d", &x);
	int sum;
	for (sum = 0; x != 0; x /= 10)
	{
		sum += x%10;
	}
	printf("%d ", sum);
	return 0;
}	

