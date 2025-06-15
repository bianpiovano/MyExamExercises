#include <stdlib.h>

int *ft_rrange(int start, int end)
{
	int size = 0;
	int *result;
	int i = 0;

	if (start <= end)
		size = end - start + 1;
	else
		size = start - end + 1;

	result = malloc(size * sizeof(int));
	if (!result)
		return NULL;

	while (i < size)
	{
		if (start <= end)
			result[i] = end - i;
		else
			result[i] = end + i;
		i++;
	}
	return result;
}
