/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjouenne <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 13:43:57 by cjouenne          #+#    #+#             */
/*   Updated: 2023/07/16 15:16:19 by cjouenne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"
#include "ft.h"

void	print_grid(int **grid)
{
	int	i;
	int	j;

	i = -1;
	j = -1;
	while (++i < 4)
	{
		while (++j < 4)
		{
			ft_putnbr(grid[i][j]);
			ft_putchar(' ');
		}
		ft_putchar('\n');
		j = -1;
	}
	ft_putchar('\n');
}
