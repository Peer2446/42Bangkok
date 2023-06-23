/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wongamph <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/16 16:47:21 by wongamph          #+#    #+#             */
/*   Updated: 2023/06/18 11:39:48 by wongamph         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argv, char *argc[])
{
	int	i;

	i = 0;
	while (argv >= 1 && argc[0][i] != '\0')
	{
		write(1, &argc[0][i], 1);
		i++;
	}
	write(1, "\n", 1);
}
