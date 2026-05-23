void sort_array(int size, int a[])
{
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
}
