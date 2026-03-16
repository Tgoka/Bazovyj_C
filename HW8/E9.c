#include <stdio.h>

#define SIZE 10

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

void Cyclic_shift_right(int arr[])
{
	int temp = arr[9];
	for (int i = 9; i > 0; i--)
	{
		arr[i] = arr[i-1];
	}
	arr[0] = temp;
}
int main()
{
	int arr[SIZE];
	Input(arr, SIZE);
	Cyclic_shift_right(arr);		
	Print(arr, SIZE);
	return 0;
}
