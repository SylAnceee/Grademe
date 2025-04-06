#include <stdlib.h>
#include <stdio.h>

int	*ft_rrange(int start, int end)
{
	int size;
	int i = 0;
	int *array;
	int step;

	if (start >= end)
		size = start - end + 1;
	else
		size = end - start + 1;

	array = malloc(size * sizeof(int));
	if (!array)
		return (NULL);

	if (start > end)
		step = -1;
	else
		step = 1;

	while (i < size)
	{
		array[i] = end;
		end = end - step;
		++i;
	}
	return (array);
}

	