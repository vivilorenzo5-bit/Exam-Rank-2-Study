#include <unistd.h>

int max(int *tab, unsigned int len)
{
	unsigned int i = 0;
	int result;

	if (len == 0)
		return (0);
	result = tab[i];
	while (i < len)
	{
		if (tab[i] > result)
			result = tab[i];
		i++;
	}
	return (result);
}