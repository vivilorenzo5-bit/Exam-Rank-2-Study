#include <unistd.h>

int	len(char *s)
{
	int	i = 0;
	while (s[i])
		i++;
	return (i);
}

int	main(int argc, char **argv)
{
	int	i;
	int	j;
	int	start;

	if (argc == 2)
	{
		i = len(argv[1]) - 1;
		while (i >= 0)
		{
			if (argv[1][i] != ' ' && argv[1][i] != '\t')
			{
				j = i;
				while (i >= 0 && argv[1][i] != ' ' && argv[1][i] != '\t')
					i--;
				start = i + 1;
				while (start <= j)
				{
					write(1, &argv[1][start], 1);
					start++;
				}
				if (i >= 0)
					write(1, " ", 1);
			}
			else
			{
				i--;
			}
		}
	}
	write(1, "\n", 1);
	return (0);
}