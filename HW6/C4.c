#include <stdio.h>

int f(int x)
{
	int result;
	if (x < (-2))
		result = 4;		
	else if (x >= 2)
		result = x * x + 4 * x + 5;
	else if (x >= (-2) && x < 2)
		result = x * x;		
	return result;
}
int main()
{
	int a, b, c, d, e, max = 0;
	scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
	for (int n = 1; n <= 5; n++) 
	{	
	if (f(a) > max)
		{
			max = f(a);
		}
	else if (f(b) > max)
		{
			max = f(b);
		}
	else if (f(c) > max)
		{
			max = f(c);
		}
	else if (f(d) > max)
		{
			max = f(d);
		}
	else if (f(e) > max)
		{
			max = f(e);
		}
	}
	printf("%d", max);
	return 0;		
}	
