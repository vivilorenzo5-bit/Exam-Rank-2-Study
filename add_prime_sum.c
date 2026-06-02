
#include <unistd.h>

int atoi(const char *str)
{
	int i = 0;
	int result = 0;
	int sign = 1;

	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return (result * sign);
}

void putnbr (int nb)
{
	char c;

	if (nb >= 10)
		putnbr(nb / 10);
	c = (nb % 10) + '0';
	write(1, &c, 1);
}

int is_prime(int number)
{
	int i = 2;

	if (number <= 1)
		return (0);
	while (i * i <= number)
	{
		if (number % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int main(int argc, char **argv)
{
	int nb;
	int sum = 0;
	int i;

	if (argc == 2)
	{
		nb = atoi(argv[1]);
		i = 2;
		while (i <= nb)
		{
			if (is_prime(i))
				sum += i;
			i++;
		}
	}
	putnbr(sum);
	write(1, "\n", 1);
}
