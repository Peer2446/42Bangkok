/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wongamph <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 17:47:16 by wongamph          #+#    #+#             */
/*   Updated: 2023/06/14 15:16:32 by wongamph         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	len(char *str)
{
	int	i;

	i = 0;
	while (*(str + i) != '\0')
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	lens;
	unsigned int	lend;
	unsigned int	i;

	i = 0;
	lend = len(dest);
	lens = len(src);
	if (size < 1)
		return (lens + size);
	while ((lend + i < size - 1) && (src[i] != '\0'))
	{
		dest[lend + i] = src[i];
		i++;
	}
	dest[i + lend] = '\0';
	if (size > lend)
		return (lens + lend);
	else
		return (lens + size);
}
/*int main(){
	char s1[10] = "bang";
	char s2[] = "kokoppytt";
	ft_strlcat(s1,s2,4);
	printf("%s",s1);
}*/
