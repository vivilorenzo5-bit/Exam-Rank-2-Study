#include <unistd.h>

void putnbr(int nb)
{
	char c;

	if (nb = -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		nb = -nb;
		write(1, "-", 1);
	}
	if (nb >= 10)
	{
		putnbr(nb / 10);
	}
	c = (nb % 10) + '0';
	write(1, &c, 1);
}