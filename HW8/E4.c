#include <stdio.h>

void BubbleSort(int arr[])
{
	int noSwap;
	for (int i = 0; i < 10; i++)
	{
		noSwap = 1;
		for (int j = 10-1; j > i; j--)
		{
			if (arr[j-1] > arr[j])
			{
				int temp = arr[j-1];
				arr[j-1] = arr[j];
				arr[j] = temp;
				noSwap = 0;
			}
		}
		if (noSwap)
			break;
	}
}

int main()
{
	int arr[10], i;
	for (i = 0; i < 10; i++)
	{
		scanf("%d", &arr[i]);
	}
	BubbleSort(arr);
	int sum = arr[8] + arr[9];
	printf("%d", sum);
	return 0;
}
