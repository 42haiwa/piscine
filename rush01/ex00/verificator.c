/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   verificator.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjouenne <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 14:42:09 by cjouenne          #+#    #+#             */
/*   Updated: 2023/07/16 19:00:50 by cjouenne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"
#include "verificator.h"

#include <stdlib.h>

int	verify_col(int **grid, int col)
{
	if (grid[0][col] == grid[1][col] ||
			grid[0][col] == grid[2][col] ||
			grid[0][col] == grid[3][col] ||
			grid[1][col] == grid[2][col] ||
			grid[1][col] == grid[3][col] ||
			grid[2][col] == grid[3][col])
		return (0);
	return (1);
}

int	verify_grid(int **views, int **grid)
{
	int	i;

	i = -1;
	if (!(verify_col(grid, 0) && verify_col(grid, 1)
			&& verify_col(grid, 2) && verify_col(grid, 3)))
	{
		return (0);
	}
	while (++i < 4)
	{
		if (!(verify_view_col(views, grid, i)
				&& verify_view_raw(views, grid, i)))
		{
			continue ;
		}
		return (0);
	}
	return (1);
}

int	verify_view_col(int **views, int **grid, int col)
{
	int	visible;

	visible = 1;
	if (grid[1][col] >= grid[0][col])
		visible++;
	if (grid[2][col] >= grid[1][col])
		visible++;
	if (grid[3][col] >= grid[2][col])
		visible++;
	if (visible == views[0][col])
		return (1);
	return (0);
}

int	verify_view_raw(int **views, int **grid, int raw)
{
	int	visible;

	visible = 1;
	if (grid[raw][1] >= grid[raw][0])
		visible++;
	if (grid[raw][2] >= grid[raw][1])
		visible++;
	if (grid[raw][3] >= grid[raw][2])
		visible++;
	if (visible == views[2][0])
		return (1);
	return (0);
}
