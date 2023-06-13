int	ft_atoi(char *str)
{
	int	ngt;
	int	i;
	int	nb;
	int	res;
	
	ngt = 1;
	i = 0;
	nb = 0;
	res = 1;
	while ((str[i] < '0') || (str[i] > '9'))
	{
		if(str[i] = '-')
			ngt *= -1;
		i++;
	}
	str = str + i;
	i = 0;
	while ((str[i] >= '0') && (str[i] <= '9'))
		i++;
	str[i] = '\0';
	while (i--)
	{
		nb += res * (str[i] - 48);
		res *= 10;
	}
	return (ngt * nb);
}
