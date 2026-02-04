#include <stdio.h>

int main()
{
	int x;
	scanf("%3d", &x);
	int umn;
	umn = x%10; 
	umn *= (x/10)%10;
	umn *= (x/100)%10; 
	printf("%d", umn);
	return 0;
}

