/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wongamph <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 14:10:27 by wongamph          #+#    #+#             */
/*   Updated: 2023/06/14 16:40:37 by wongamph         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	find_first(int nbr, int base)
{
	int	b;
	int	first;

	first = 0;
	b = 1;
	if (base == 0)
		return(-1);
	while (nbr > b)
	{
		b *= base;
		first++;
	}
	return (first-1);
}

void	find_n(int *buf,int nbr, int base, int nbase)
{
	int	b;

	b = 1;
	while (nbase--)
		b *= base;
	*buf = nbr % b;
	*(buf + 1) = nbr / b;
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	first;
	int	lenbase;
	int	buf[2];
	if (nbr < 0)
	{
		write(1, "-", 1);
		nbr *= -1;
	}
	if (nbr == 0)
	{
		write(1, "0", 1);
		return ;
	}
	lenbase = 0;
	while (base[lenbase] != '\0')
		lenbase++;
	first = find_first(nbr, lenbase);
	while (first > -1)
	{		find_n(buf, nbr, lenbase, first);
		first--;
		nbr = buf[0];
		write(1, &base[buf[1]], 1);
	}
}
