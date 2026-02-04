#include <stdio.h>

int main()
{
	int x;
	scanf("%3d", &x);
	int sum;
	sum = x%10;
	sum += (x/10)%10;
	sum += (x/100)%10;
	printf("%d", sum);
	return 0;
}

