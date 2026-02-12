#include <stdio.h>

int main()
{
	int x;
	scanf("%d", &x);
	x /= 100;	
	if (x < 10 && x >= 1)
		printf("YES");
	else if (x >= 10) 
		printf("NO");
	else if (x <= 1)
		printf("NO");
	return 0;
}
