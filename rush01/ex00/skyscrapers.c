/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   skyscrapers.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjouenne <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 18:28:27 by cjouenne          #+#    #+#             */
/*   Updated: 2023/07/16 13:24:13 by cjouenne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"
#include "skyscrapers.h"
#include "solver.h"

#include <stdlib.h>

void	init_skyscrapers(int argc, char *argv[])
{
	int	**views;
	int	i;

	i = -1;
	views = (int **) malloc(sizeof(int *) * 4);
	if (views == NULL)
	{
		ft_putstr("Error !\n");
		exit(0);
	}
	while (++i < 4)
	{
		views[i] = (int *) malloc(sizeof(int) * 4);
		if (views[i] == NULL)
		{
			ft_putstr("Error !\n");
			exit(0);
		}
	}
	parse_argv(argc, argv, views);
}

void	parse_argv(int argc, char *argv[], int **views)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	j = 0;
	k = 0;
	(void) argc;
	while (argv[1][i])
	{
		if (argv[1][i] >= '1' && argv[1][i] <= '4')
		{
			while (k < 4)
			{
				views[j][k] = ft_atoi_char(argv[1][i]);
				k++;
				i += 2;
			}
			k = 0;
			j++;
			if (j >= 4)
				break ;
		}
	}
	is_valid(views);
}

void	is_valid(int **views)
{
	int	i;

	i = 0;
	while (i < 4)
	{
		if (!(views[0][i] + views[1][i] >= 3 && views[0][i] + views[1][i] <= 5))
		{
			ft_putstr("Error !\n");
			exit(0);
		}
		if (!(views[2][i] + views[3][i] >= 3 && views[2][i] + views[3][i] <= 5))
		{
			ft_putstr("Error !\n");
			exit(0);
		}
		i++;
	}
	init_grid(views);
}
