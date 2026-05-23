void print_digit(char s[]) 
{
	int count0 = 0, count1 = 0, count2 = 0, count3 = 0, count4 = 0, count5 = 0, count6 = 0, count7 = 0, count8 = 0, count9 = 0;
	for (; *s != '\0'; s++) 
	{
		if (*s == '0') 
			count0++;
		else if (*s == '1') 
			count1++;
		else if (*s == '2') 
			count2++;
		else if (*s == '3') 
			count3++;
		else if (*s == '4') 
			count4++;
		else if (*s == '5') 
			count5++;
		else if (*s == '6') 
			count6++;
		else if (*s == '7') 
			count7++;
		else if (*s == '8') 
			count8++;
		else if (*s == '9') 
			count9++;
	}
	if(count0)
		printf("0 %d\n", count0);
	if(count1)
		printf("1 %d\n", count1);
	if(count2)
		printf("2 %d\n", count2);
	if(count3)
		printf("3 %d\n", count3);
	if(count4)
		printf("4 %d\n", count4);
	if(count5)
		printf("5 %d\n", count5);
	if(count6)
		printf("6 %d\n", count6);
	if(count7)
		printf("7 %d\n", count7);
	if(count8)
		printf("8 %d\n", count8);
	if(count9)
		printf("9 %d\n", count9);	
}
