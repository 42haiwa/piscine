/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjouenne <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 17:56:24 by cjouenne          #+#    #+#             */
/*   Updated: 2023/07/12 20:07:19 by cjouenne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*buf;

	i = 0;
	if (min >= max)
		return (NULL);
	buf = (int *) malloc(sizeof(int) * (max - min));
	while (min < max)
	{
		buf[i] = min;
		i++;
		min++;
	}
	return (buf);
}
