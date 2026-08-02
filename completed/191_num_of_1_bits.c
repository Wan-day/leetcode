// First Sulotion using math

int hammingWeight(int n) 
{
	int	result = 0;
	int i = 2;

	while (n > 0)
	{
		if (n & 1)
			result++;
		n = n / i;
	}
	return result;
}

// Second solution, not math

int hammingWeight(int n)
{
	int	result = 0;

    for (int i = 0; i < 31; i++)
	{
		if (n & 1)
			result++;
		n >>= 1;
	}
	return result;
}
