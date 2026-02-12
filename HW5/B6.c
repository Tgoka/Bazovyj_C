#include <stdio.h>

int main()
{
	int x;
	scanf("%d", &x);
	for (int a, b; x != 0; x /= 10)
	{
		a = x%10;
		b = (x/10)%10;	
		if (a == b)
			break;			
	}	
	if (x > 0)
		printf("YES\n");		
	else
		printf("NO\n");	
	return 0;
}	

