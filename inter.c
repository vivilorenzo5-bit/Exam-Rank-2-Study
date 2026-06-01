#include <unistd.h>

int main(int argc, char **argv)
{
	int i = 0;
	int j;
	int visto[256] = {0};

	if (argc == 3)
	{
		while (argv[1][i])
		{
			if (visto[argv[1][i]] == 0)
			{
				j = 0;
				while (argv[2][j])
				{
					if (argv[1][i] == argv[2][j])
					{
						write(1, &argv[1][i], 1);
						break;
					}
					j++;
				}
				visto[argv[1][i]] = 1;
			}
			i++;
		}
	}
	write(1, "\n", 1);
}
