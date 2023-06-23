/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wongamph <wongamph@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 13:52:59 by wongamph          #+#    #+#             */
/*   Updated: 2023/06/19 12:37:36 by wongamph         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	checkspace(char c)
{
	if (c == 32 || (c >= 9 && c <= 13))
		return (1);
	return (0);
}

int	ft_atoi(char *str)
{
	int	ngt;
	int	nb;

	ngt = 1;
	nb = 0;
	while (((*str == '+') || checkspace(*str) || (*str == '-')))
	{
		if (*str == '-')
			ngt *= -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		nb = nb * 10 + (*str - 48);
		str++;
	}
	return (ngt * nb);
}
/*int main(){
    int c= ft_atoi("afsd-------");
    printf("%d", c);
}*/
