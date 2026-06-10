
unsigned int lcm(unsigned int a, unsigned int b)
{
	unsigned int n1;
	unsigned int n2;
	unsigned int rem;
	unsigned int hcf;

	if (a == 0 || b == 0)
		return (0);
	n1 = a;
	n2 = b;

	while (b != 0)
	{
		rem = a % b;
		a = b;
		b = rem;
	}
	hcf = a;
	return ((n1 * n2) / hcf);
}
