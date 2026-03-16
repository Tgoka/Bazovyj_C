#include <stdio.h>

int main()
{
	int arr[10], i;
	for (i = 0; i < 10; i++)
	{
		scanf("%d", &arr[i]);
	}
	int sum = 0;
	for (i = 0; i < 10; i++)
	{
		if (arr[i] > 0)
		{
			sum += arr[i];		
		}					
	}	
	printf("%d", sum);
	return 0;
}
