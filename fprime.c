#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
	int n;
	int d;

	if (argc == 2)
	{
		n = atoi(argv[1]);
		d = 2;
		if (n == 1)
			return (printf("1\n"), 0);
		while (n > 1)
		{
			if (n % d == 0)
			{
				printf("%d", d);
				n /= d;
				if (n > 1)
					printf("*");
			}
			else
				d++;
		}
	}
	return (printf("\n"), 0);
}