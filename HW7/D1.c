#include <stdio.h>

int f(int n)
{
	if (n>1)
		f(n-1);
	printf("%d ", n);
	return 0;	
}

int main()
{
	int num;
	scanf("%d", &num);
   	return f(num);		
}


