/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solver.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjouenne <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 12:05:20 by cjouenne          #+#    #+#             */
/*   Updated: 2023/07/16 18:43:13 by cjouenne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "solver.h"
#include "ft.h"
#include "utils.h"
#include "verificator.h"
#include "bruteforce.h"

#include <stdlib.h>

void	init_grid(int **views)
{
	int	**grid;
	int	i;

	i = -1;
	grid = (int **) malloc(sizeof(int *) * 4);
	if (grid == NULL)
	{
		ft_putstr("Error !\n");
		exit(0);
	}
	while (++i < 4)
	{
		grid[i] = (int *) malloc(sizeof(int) * 4);
		if (grid[i] == NULL)
		{
			ft_putstr("Error !\n");
			exit(0);
		}
	}
	pre_fill(views, grid);
}

void	pre_fill(int **views, int **grid)
{
	int	i;
	int	j;

	i = -1;
	j = -1;
	while (++i < 4)
	{
		while (++j < 4)
		{
			grid[i][j] = j;
		}
		j = -1;
	}
	solve(views, grid);
}

void	solve(int **views, int **grid)
{
	bruteforce(views, grid);
}
