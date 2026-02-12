#include <stdio.h>

int main()
{
	int x;
	scanf("%d", &x);
	if (x == 0)
		printf("YES\n");
	else
	{
		int a, b;
		for (; x != 0; x /= 10)
		{
			a = x%10;
			b = (x/10)%10;	
			if (a <= b)
				break;			
		}	
		if (a <= b)
			printf("NO\n");	
		else 	
			printf("YES\n");
	}		
	return 0;
}	

