/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wongamph <wongamph@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 13:25:58 by wongamph          #+#    #+#             */
/*   Updated: 2023/06/23 15:14:33 by wongamph         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
#include <stdlib.h>

int	ft_atoi_base(char *str, char *base);
int	len(char *s);
int	checkerror(char *base);

char	*ft_strdup(char *src)
{
	int		i;
	char	*ptr;

	i = 0;
	while (src[i])
		i++;
	ptr = malloc(i + 1);
	i = 0;
	while (src[i])
	{
		ptr[i] = src[i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}

char	*ft_putnbr_base(char *num, int nbr, char *base)
{
	int	lenbase;
	int	i;
	int	temp;

	temp = nbr;
	num[33] = '\0';
	i = 32;
	lenbase = len(base);
	if (nbr == 0)
		num[i--] = '0';
	while (nbr != 0)
	{
		if (nbr > 0)
			num[i] = base[(nbr % lenbase)];
		else
			num[i] = base[-1 * (nbr % lenbase)];
		nbr /= lenbase;
		i--;
	}
	if (temp < 0)
		num[i--] = '-';
	return (&num[++i]);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		nb;
	char	num[34];
	char	*tmp;
	char	*res;

	if (checkerror(base_from) || checkerror(base_to))
		return (0);
	nb = ft_atoi_base(nbr, base_from);
	tmp = ft_putnbr_base(num, nb, base_to);
	res = ft_strdup(tmp);
	return (res);
}
// int	main(void)
// {
// 	printf("%s",ft_convert_base("---++0", "0123456789", "0123456789abcdef"));
// }
