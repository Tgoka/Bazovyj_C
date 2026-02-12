#include <stdio.h>

int main()
{
	int x;
	scanf("%d", &x);
	int a, b;
	for (; x != 0; x /= 10)
	{
		a = x%10;
		b = a%2;	
		if (b != 0)
			break;			
	}	
	if (b != 0)
		printf("NO\n");				
	else
		printf("YES\n");	
	return 0;
}	

