#include <stdio.h>

char f(char c)
{
	while ( (c=getchar())!='.')
		if(c>='a' && c<='z')
			putchar(c-0x20);
		else
			putchar(c);
	return 0;
}

int main()
{
	char b;
	scanf("", &b);
	return f(b);
}
