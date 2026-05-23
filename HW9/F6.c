int is_two_same(int size, int a[])
{
	scanf("%d", &size);
    for (int k = 0; k < size; k++)
    {
		scanf("%d", &a[k]);	
	} 
	for(int i = 0; i < size; i++)
	{
		int noSwap = 1;
		for(int j = 0; j < (size-1); j++)
		{
			if(a[j] > a[j+1])
			{
				int temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
				noSwap = 0;
			}
		}
		if(noSwap)
			break;
	}
	int count = 0;
	for(int i = 0; i < size; i++)
	{
		for(int j = i+1; j < size; j++)
		{
			if(a[i] == a[j])
				count++;
		}
	}
	if(count != 0)
		return 1;
	else
		return 0;	
}
