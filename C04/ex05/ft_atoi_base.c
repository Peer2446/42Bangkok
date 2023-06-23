/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wongamph <wongamph@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 13:45:09 by wongamph          #+#    #+#             */
/*   Updated: 2023/06/22 16:30:43 by wongamph         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	len(char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

int	checkspace(char c)
{
	if (c == 32 || (c >= 9 && c <= 13))
		return (1);
	return (0);
}

int	cton(char c, char *base)
{
	int	i;

	i = 0;
	while (c != base[i] && base[i])
		i++;
	if (base[i] == '\0')
		return (-1);
	return (i);
}

int	checkerror(char *base)
{
	int	i;
	int	j;
	int	lenbase;

	lenbase = len(base);
	i = 0;
	if (lenbase < 2)
		return (1);
	while (i < lenbase)
	{
		j = i +1;
		if (base[i] == '+' || base[i] == '-' || base[i] == ' '
			|| (base[i] >= 9 && base[i] <= 13))
			return (1);
		while (j < lenbase)
		{
			if (base[i] == base[j])
			{
				return (1);
			}
			j++;
		}
		i++;
	}
	return (0);
}

int	ft_atoi_base(char *str, char *base)
{
	int	lenb;
	int	i;
	int	nb;
	int	ngt;

	lenb = len(base);
	i = 0;
	nb = 0;
	ngt = 1;
	if (checkerror(base))
		return (0);
	while (checkspace(*str) || *str == '+' || *str == '-')
	{
		if (*str++ == '-')
			ngt *= -1;
	}
	while (cton(str[i], base) != -1)
	{
		nb = (nb * lenb) + cton(str[i], base);
		i++;
	}
	return (ngt * nb);
}

int		main(void)
{
	char	*str;

	str =  "  	\n    ---+--+1a4yab4wp";

	printf("%d\n", ft_atoi_base(str, "0123456789abcdef"));
}
