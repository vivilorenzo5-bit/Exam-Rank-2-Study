#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
	int nb1;
	int nb2;
	int rem;

	if (argc == 3)
	{
		nb1 = atoi(argv[1]);
		nb2 = atoi(argv[2]);

		while (nb2 != 0)
		{
			rem = nb1 % nb2;
			nb1 = nb2;
			nb2 = rem;
		}
		printf("%d", nb1);
	}
	printf("\n");
}