#include <stdio.h>

void reverse_string(void)
{
	char ch;
	scanf ("%c", &ch);
	if (ch != '.') 
		reverse_string(); 
	else
		return;
	printf ("%c", ch); 
}

int main()
{
	reverse_string();
	return 0;
}
