#include <stdio.h>

int f(int n, int p)
{
	int count = 0, num1, num2, num3, num4, num5, num6;
	if (p >= 2 && p <= 9)
	{
		if (n > 0 && n >= p)
		{
			num1 = n%p;
			n /= p;
			count++;
			if (n != 0)
			{
				num2 = n%p;
				n /= p;
				count++;
				if (n != 0)
				{
					num3 = n%p;
					n /= p;
					count++;
					if (n != 0)
					{
						num4 = n%p;
						n /= p;
						count++;
						if (n != 0)
						{
							num5 = n%p;
							n /= p;
							count++;
							if (n != 0)
							{
								num6 = n%p;
								n /= p;
								count++;							
							}									
						}							
					}		
				}							
			}
			switch(count)
			{
				case 1: printf("%d", num1); break;
				case 2: printf("%d%d", num2, num1); break;
				case 3: printf("%d%d%d", num3, num2, num1); break;
				case 4: printf("%d%d%d%d", num4, num3, num2, num1); break;
				case 5: printf("%d%d%d%d%d", num5, num4, num3, num2, num1); break;
				case 6: printf("%d%d%d%d%d%d", num6, num5, num4, num3, num2, num1); break;
			}			
		}
		else if (n > 0 && n < p)
		{
			printf("%d", n);
		}
		else if (n == 0)
		{
			printf("%d", 0);
		}
	}
	return 0;
}
int main()
{
	int n, p;
	scanf("%d %d", &n, &p);
	return f(n, p);
}
