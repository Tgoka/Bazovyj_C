#include <stdio.h>

#define SIZE 12

void Input(int arr[], int n)
{
	for (int i = 0; i < n; i++)
		scanf("%d", &arr[i]);	
}

void Print(int arr[], int n)
{
	for (int i = 0; i < n; i++)
		printf("%d ", arr[i]);
}

void Inv(int arr[], int n, int m)
{
	for (int i = n; i < m; i++)
	{
		for (int j = m-1; j > i; j--)
		{			
			int temp = arr[j-1];
			arr[j-1] = arr[j];
			arr[j] = temp;
		}
	}
}

int main()
{	
	int arr[SIZE];
	Input(arr, SIZE);
	Inv(arr, 0, 4);
	Inv(arr, 4, 8);	
	Inv(arr, 8, SIZE);			
	Print(arr, SIZE);
	return 0;
}
