#include <unistd.h>
#include <stdlib.h>

int *ft_range(int start, int end)
{
	int *s;
	int *arr;
	int n;

	n = end >= start ? end - start : start - end;
	if (!(arr = (int *) malloc (sizeof(int) * n + 1)))
		return NULL;
	s = arr;
	if (end > start)
	{
		while (end > start)
			*s++ = start++;
	}
	else 
	{
		while (end < start)
			*s++ = start--;
	}
	*s = start;
	return (arr);
}