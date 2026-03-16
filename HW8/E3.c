#include <stdio.h>

int main()
{
	int arr[10], i;
	for (i = 0; i < 10; i++)
	{
		scanf("%d", &arr[i]);
	}
	int max = arr[2], max_pos, min = arr[2], min_pos;
	for (i = 0; i < 10; i++)
	{
		if (min > arr[i])
		{
			min = arr[i];
			min_pos = i + 1;			
		}	
		if (max < arr[i])
		{
			max = arr[i];
			max_pos = i + 1;
		}			
	}
	printf("%d %d %d %d", max_pos, max, min_pos, min);
	return 0;
}
