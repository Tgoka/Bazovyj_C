#include <stdio.h>
int modul(int num)
{
	return (num < 0) ? -num: num;
}
int main()
{
	int num;
	scanf("%d", &num);
	printf("%d", modul(num));
	return 0;		
}	

