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
        if (y % 10 == i)
			count++;           
		}        
		if (count >= 2)
			break;   
	}
	if (count >= 2)
		printf("YES\n");
	else
		printf("NO\n");
	return 0;
}	

