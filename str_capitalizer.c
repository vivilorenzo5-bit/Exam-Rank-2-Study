#include <unistd.h>

void str_capitalize(char *str)
{
	int i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		if ((str[i] >= 'a' && str[i] <= 'z') && (i == 0 || str[i - 1] == ' ' || str[i - 1] == '\t'))
			str[i] -= 32;
		write(1, &str[i], 1);
		i++;
	}
}


int main(int argc, char **argv)
{

	int i = 0;

	if (argc > 1)
	{
		i = 1;
		while (i < argc)
		{
			str_capitalize(argv[i]);
			write(1, "\n", 1);
			i++;
		}
	}
	else
		write(1, "\n", 1);
}