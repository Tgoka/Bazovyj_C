#include <stdio.h>

int main()
{
	int arr[5] = {0};
	float am;
	for(int i = 0; i < 5; i++)
	{
		scanf("%d", &arr[i]);
		am += arr[i];
	}	
	am = am/5;
	printf("%.3f", am);
	return 0;
}
