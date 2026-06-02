#include <stdlib.h>

int *ft_range(int start, int end)
{
	int *tab;
	int i;
	int size;

	if (start <= end)
		size = end - start + 1;
	else
		size = start - end + 1;
	tab = malloc(sizeof(int) * size);
	if (tab == NULL)
		return (NULL);
	i = 0;
	while (i < size)
	{
		tab[i] = start;
		if (start < end)
			start++;
		else if (start > end)
			start--;
		i++;
	}
	return (tab);
}