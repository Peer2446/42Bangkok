/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wongamph <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 11:22:18 by wongamph          #+#    #+#             */
/*   Updated: 2023/06/19 16:58:42 by wongamph         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	swap(char **a, char **b)
{
	char	*tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
		i++;
	return (s1[i] - s2[i]);
}

void	sort(int argv, char *argc[])
{
	int	i;
	int	j;

	if (argv == 1)
		return ;
	i = 1;
	while (i < argv)
	{
		j = i + 1;
		while (j < argv)
		{
			if (ft_strcmp(argc[i], argc[j]) > 0)
				swap(argc + i, argc + j);
			j++;
		}
		i++;
	}
}

int	main(int argv, char *argc[])
{
	int	i;
	int	j;

	i = 1;
	sort(argv, argc);
	while (i < argv)
	{
		j = 0;
		while (argc[i][j] != '\0')
		{
			write(1, &argc[i][j], 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}
