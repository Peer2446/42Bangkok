int	find_first(int nbr, int base)
{
	int	b;
	int	first;

	first = 0;
	b = 1;
	while (nbr > b)
	{
		b *= base;
		first++;
	}
	return (first);
}

void	find_n(int *buf,int nbr, int base, int nbase)
{
	int	b;

	b = 1;
	while (--nbase)
		b *= base;
	*buf = nbr % b;
	*(buf + 1) = nbr / b;
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	first;
	int	lenbase;
	int	buf[2];
	
	lenbase = 0;
	while (base[lenbase] != '\0')
		lenbase++;
	first = find_first(nbr, lenbase);
	while (nbr != 0)
	{
		find_n(buf, nbr, lenbase, first);
		first--;
		nbr = buf[0];
		write(1, &base[buf[1]], 1);
	}
}

