#include <stdio.h>

int f(int a, int b)
{	
	if (a > b)
	{
		printf("%d ", a);
		f(a-1, b);	
	}
	else if (a < b)
	{
		f(a, b-1);			
		printf("%d ", b);
	}
	else
	{			
		printf("%d ", a);
	}
	return 0;	
}

int main()
{
	int x, y;
	scanf("%d %d", &x, &y);
 	return f(x, y);
}


