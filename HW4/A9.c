#include <stdio.h>

int main()
{
	int a, b, c, e, f, max;
	scanf("%d %d %d %d %d", &a, &b, &c, &e, &f);
	max = a > b ? a : b;
	max = max > c ? max: c;
	max = max > e ? max: e;
	max = max > f ? max: f;
	printf("%d", max);	
	return 0;
}
