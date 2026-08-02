void moveZeroes(int* nums, int numsSize)
{
	for (int i = 0; i < numsSize; i++)
	{
		if (nums[i] == 0)
		{
			nums[i] = nums [i + 1];
			nums [i + 1] = 0;
			for (int j = i + 1; j < numsSize; j++)
			{
				if (nums[j] != 0)
				{
					i--;
					break;
				}
				return 0;
			}
		}
	}
}
