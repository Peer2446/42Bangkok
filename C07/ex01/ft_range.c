/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wongamph <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 17:32:43 by wongamph          #+#    #+#             */
/*   Updated: 2023/06/18 18:00:18 by wongamph         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int		*range;
	int		i;

	if (max <= min)
		return (0);
	i = 0;
	range = malloc(max - min);
	while (i < max - min)
	{
		range[i] = i + min;
		i++;
	}
	return (range);
}
