#include <stdio.h>
int f(int x)
{
	int sum;
	for (sum = 0; x != 0; x--)
	{
		sum = x + sum;
	}
	return sum;	
}

int main()
{
	int num;
	scanf("%d", &num);
    printf("%d ", f(num));
	return 0;		
}	


