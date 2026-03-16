#include <stdio.h>

void Input(int arr[5])
{
	for (int i = 0; i < 5; i++)
	{
		scanf("%d",&arr[i]);
	}
}
int Min(int arr[5])
{
	int min = arr[0];
	for (int i = 0; i < 5; i++)
	{
		if (min > arr[i])
			min = arr[i];
	}
	return min;
}

int main()
{
	int arr[5] = {0};
	Input(arr);
	printf("%d ", Min(arr));
	return 0;
}
