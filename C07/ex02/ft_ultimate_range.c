/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wongamph <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 17:55:49 by wongamph          #+#    #+#             */
/*   Updated: 2023/06/23 14:39:57 by wongamph         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int		i;
	int		*tmp;

	if (max <= min)
	{
		*range = NULL;
		return (0);
	}
	tmp = (int *)malloc((max - min));
	if (tmp == NULL)
		return (-1);
	i = -1;
	while (++i < max - min)
		tmp[i] = min + i;
	*range = tmp;
	return (i);
}
