/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjouenne <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 18:21:50 by cjouenne          #+#    #+#             */
/*   Updated: 2023/07/13 00:51:36 by cjouenne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	*buf;

	i = 0;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	buf = (int *) malloc(sizeof(int) * (max - min));
	if (!(buf))
	{
		return (-1);
	}
	while (min < max)
	{
		buf[i] = min;
		i++;
		min++;
	}
	*range = buf;
	return (i);
}
