/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bruteforce.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjouenne <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 15:19:29 by cjouenne          #+#    #+#             */
/*   Updated: 2023/07/16 18:41:57 by cjouenne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bruteforce.h"
#include "verificator.h"
#include "utils.h"
#include "ft.h"

static int const	g_possibility[24][4]
	= {
{1, 2, 3, 4},
{1, 2, 4, 3},
{1, 3, 2, 4},
{1, 3, 4, 2},
{1, 4, 2, 3},
{1, 4, 3, 2},
{2, 1, 3, 4},
{2, 1, 4, 3},
{2, 3, 1, 4},
{2, 3, 4, 1},
{2, 4, 1, 3},
{2, 4, 3, 1},
{3, 1, 2, 4},
{3, 1, 4, 2},
{3, 2, 1, 4},
{3, 2, 4, 1},
{3, 4, 1, 2},
{3, 4, 2, 1},
{4, 1, 2, 3},
{4, 1, 3, 2},
{4, 2, 1, 3},
{4, 2, 3, 1},
{4, 3, 1, 2},
{4, 3, 2, 1}
};

void	change_line(int **grid, int raw, const int *src)
{
	grid[raw][0] = src[0];
	grid[raw][1] = src[1];
	grid[raw][2] = src[2];
	grid[raw][3] = src[3];
}

void	bruteforce(int **views, int **grid)
{
	int	index[4];

	index[0] = 0;
	while (index[0] < 24)
	{
		index[1] = 0;
		while (index[1] < 24)
		{
			index[2] = 0;
			while (index[2] < 24)
			{
				index[3] = 0;
				while (index[3] < 24)
				{
					bruteforce_ext(views, grid, index);
				}
				change_line(grid, 2, &g_possibility[index[2]][0]);
				index[2] += 1;
			}
			change_line(grid, 1, &g_possibility[index[1]][0]);
			index[1] += 1;
		}
		change_line(grid, 0, &g_possibility[index[0]][0]);
		index[0] += 1;
	}
}

void	bruteforce_ext(int **views, int **grid, int index[])
{
	change_line(grid, 3, &g_possibility[index[3]][0]);
	if (verify_grid(views, grid))
		print_grid(grid);
	index[3] += 1;
}
