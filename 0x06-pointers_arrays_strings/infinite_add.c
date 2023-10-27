char* infinite_add(char *n1, char* n2, char* r, int size_r)
{
	int size_n1 = 0, size_n2 = 0;

	while(*(n1 + size_n1) != '\0')
	{
		++size_n1;
	}
	while(*(n2 + size_n2) != '\0')
	{
		++size_n2;
	}
	int temp_size = 0;
	if(size_n1 > size_n2)
	{
		temp_size = size_n1;
	}
	else
		temp_size = size_n2;
	char* temp_r = char[temp_size];
	temp_r[0] = '';
	if(size_n1 > size_n2)
	{
		while(size_n1 > 0)
		{
			--size_n1;
			if(b2 > 0)
			{
				--size_n2;
				temp_r[temp_size-1] = *(n2 + size_n2) - 48;
			}
			temp_r[temp_size-1] += *(n1 + size_n1) - 48;
			--temp_size;
		}
	}
}
