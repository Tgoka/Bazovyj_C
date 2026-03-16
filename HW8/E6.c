#include <stdio.h>

int main()
{
	int arr[12], i;
	float am;
	for (i = 0; i < 12; i++)
	{
		scanf("%d", &arr[i]);
		am += arr[i];
	}
	am = am/12;
	printf("%.2f", am);
	return 0;
}

