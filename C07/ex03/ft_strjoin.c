/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wongamph <wongamph@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 12:13:07 by wongamph          #+#    #+#             */
/*   Updated: 2023/06/19 12:18:31 by wongamph         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include <stdlib.h>

int	len(const char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*tmp;
	int		allsize;
	int		i;
	int		k;
	int		j;

	allsize = 0;
	i = 0;
	k = 0;
	while (i < size)
		allsize += len(strs[i++]);
	i = 0;
	allsize += len(sep) * (size - 1) + 1;
	tmp = (char *)malloc(allsize);
	while (i < size)
	{
		j = 0;
		while (*(strs[i]))
			tmp[k++] = *(strs[i]++);
		while (sep[j] && k < allsize - 1)
			tmp[k++] = sep[j++];
		i++;
	}
	tmp[allsize - 1] = '\0';
	return (tmp);
}

/*int main() {
	char **a[4];
	char *b = "abcd";
	char *c = "ecce";
	char *d = "fdsfs";
	char *e = "vdsfs";
	a[0] = b;
	a[1] = c;
	a[2]=d;
	a[3]=e;
	printf("%s",ft_strjoin(4,a,", "));
	return 0;
}*/
