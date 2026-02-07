#include <stdio.h>

int main()
{
	int a, b, c, e, f, max, min, sum;
	scanf("%d %d %d %d %d", &a, &b, &c, &e, &f);
	max = a > b ? a : b;
	max = max > c ? max: c;
	max = max > e ? max: e;
	max = max > f ? max: f;	
	min = a < b ? a : b;
	min = min < c ? min: c;
	min = min < e ? min: e;
	min = min < f ? min: f;
	sum=max+min;
	printf("%d", sum);	
	return 0;
}
