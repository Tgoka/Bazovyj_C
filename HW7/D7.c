#include <stdio.h>

int f(int n)
{	
	if (n>0)
	{
		printf("%d ", n);
		f(n-1);	
	}
	return 0;	
}

int main()
{
	int num;
	scanf("%d", &num);
   	return f(num);		
}


