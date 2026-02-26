#include <stdio.h>
unsigned long long f(unsigned long long num)
{
	unsigned long long n, x;
	if (num == 1)
		x = 1;
	else if (num >= 2)
		for (x = 2, n = 3; n != 65; n++)
		{		
		x = 2 * x;
		if (n == num)
			break;
		}
	return x;	
}
int main()
{
	unsigned long long chislo;
	scanf("%llu", &chislo);
    printf("%llu", f(chislo));
	return 0;	
}	


