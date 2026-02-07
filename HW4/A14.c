#include <stdio.h>

int main()
{
	int x, a, b, c, max;
	scanf("%3d", &x);
	a = x%10; 
	b = (x/10)%10;
	c = (x/100)%10; 
	max = a > b ? a : b;
	max = max > c ? max: c;
	printf("%d", max);
	return 0;
}

