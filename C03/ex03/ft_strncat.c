/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wongamph <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 12:31:46 by wongamph          #+#    #+#             */
/*   Updated: 2023/06/13 12:34:56 by wongamph         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int	begin;

	begin = 0;
	while (dest[begin] != '\0')
	{
		begin++;
	}
	while (nb-- && (*src != '\0'))
	{
		dest[begin++] = *src++;
	}
	dest[begin] = '\0';
	return (dest);
}
