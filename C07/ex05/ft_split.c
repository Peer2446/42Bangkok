/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wongamph <wongamph@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 13:11:23 by wongamph          #+#    #+#             */
/*   Updated: 2023/06/22 15:24:06 by wongamph         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	is_separator(char c, char *charset)
{
	while (*charset && c)
		if (c == *charset++)
			return (1);
	if (c)
		return (0);
	return (1);
}

int	array_size(char *str, char *charset)
{
	int	size;	

	size = 0;
	while (*str)
	{
		if (!is_separator(*str, charset) && is_separator(*(str + 1), charset))
			size++;
		str++;
	}
	return (size);
}

char	*copy(char *begin, char *end)
{
	int		i;
	char	*ptr;
	char	*buf;

	i = 0;
	buf = begin;
	while (buf++ != end)
		i++;
	ptr = (char *)malloc((i + 1) * sizeof(char));
	i = 0;
	while (begin++ != end)
	{
		ptr[i++] = *(begin - 1);
	}
	ptr[i] = '\0';
	return (ptr);
}

char	**putstrs(char *str, char *charset, int size)
{
	int		i;
	char	**res;
	char	*begin;
	char	*end;

	i = 0;
	res = (char **)malloc((size + 1) * sizeof(char *));
	res[size] = 0;
	while (i < size)
	{
		while (is_separator(*str, charset))
			str++;
		begin = str;
		end = str;
		while (!is_separator(*end, charset))
			end++;
		str = end;
		res[i++] = copy(begin, end);
	}
	return (res);
}

char	**ft_split(char *str, char *charset)
{
	char	**tmp;
	int		size;

	size = array_size(str, charset);
	tmp = putstrs(str, charset, size);
	return (tmp);
}
