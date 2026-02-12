#include <stdio.h>

int main()
{
	int x;
	scanf("%d", &x);
	int count;
	for (int i = 0, y; i < 10; i++) 
	{
		y = x;
		count = 0;
		for (; y != 0; y /= 10) 
		{
        if (y % 10 == 9)
			count++;           
		}        
		if (count >= 2)
			break;   
	}
	if (count >= 2 || count == 0)
		printf("NO\n");
	else
		printf("YES\n");
	return 0;
}	

