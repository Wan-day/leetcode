bool isPalindrome(int x)
{
	int	num[10];
	int	j = 0;

	if (x < 0)
		return false;
	while (x > 0)
	{
		num[j] = x % 10;
		x = x / 10;
		j++;
	}
	j--;
	for (int i = 0; i < j; i++)
	{
		if (num[i] != num[j])
			return false;
		j--;
	}
	return true;
}

#include <stdio.h>

int main()
{
	printf("%d\n", isPalindrome(1121));
	return 0;
}
