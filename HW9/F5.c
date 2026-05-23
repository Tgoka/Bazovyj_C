int find_max_array(int size, int a[])
{
	scanf("%d", &size);
	for (int i = 0; i < size; i++)
    {
		scanf("%d", &a[i]);	
	} 
	int max = a[0];
	for(int i = 1; i < size; i++)
	{
			if(max < a[i])
				max = a[i];
	}
	return max;
}
