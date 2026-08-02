#include <stdlib.h>

int* twoSum(int* nums, int numsSize, int target, int* returnSize) 
{
    int	*result;

	for (int i = 0; i < numsSize; i++)
	{
		for (int j = i + 1; j < numsSize; j++)
		{
			if (nums[i] + nums[j] == target)
			{
				*returnSize = 2;
                result = malloc(*returnSize * sizeof(int));
                result[0] = i;
				result[1] = j;
				return (result);
			}
		}
	}
    *returnSize = 0;
	return 0;
}

#include <stdio.h>

int main()
{
	int	nums[] = {1, 2, 2, 3, 5, 6, 7};
	int number = 8;
	int size = 7;
	int	*result = twoSum(nums, size, number);

	printf("%d + %d = %d\n", nums[result[0]], nums[result[1]], number);
	return (0);
}
