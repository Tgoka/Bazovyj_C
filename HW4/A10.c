#include <stdio.h>

int main()
{
	int a, b, c, e, f, min;
	scanf("%d %d %d %d %d", &a, &b, &c, &e, &f);
	min = a < b ? a : b;
	min = min < c ? min: c;
	min = min < e ? min: e;
	min = min < f ? min: f;
	printf("%d", min);	
	return 0;
}
