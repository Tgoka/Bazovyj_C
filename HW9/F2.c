void sort_even_odd(int n, int a[])
{    
   	int count_chet, count_nechet, i;
	for(count_chet = 0, i = 0; i < n; i++)
	{
		if(a[i]%2 == 0)
			count_chet++;		
	}
	for(count_nechet = 0, i = 0; i < n; i++)
	{
		if(a[i]%2 != 0)
			count_nechet++;		
	}
	int a_chet[count_chet];
	int a_nechet[count_nechet];
	for(int i = 0, l = 0, m = 0; i < n; i++)		
	{
		if(a[i]%2 == 0)
		{
			a_chet[l] = a[i];
			l++;
		}
		if(a[i]%2 != 0)
		{
			a_nechet[m] = a[i]; 
			m++;
	    }
	}
	for (int j = 0; j < count_chet; j++) 
	{
        a[j] = a_chet[j];
    }    
    for (int k = count_chet; k < n; k++) 
	{
        a[k] = a_nechet[k-count_chet];
    }
}
