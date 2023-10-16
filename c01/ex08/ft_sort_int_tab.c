/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjouenne <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 15:55:21 by cjouenne          #+#    #+#             */
/*   Updated: 2023/07/22 16:09:44 by cjouenne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_swap(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *b;
	*b = c;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;

	i = -1;
	while (++i < size)
	{
		j = -1;
		while (j < (size - i) - 1)
		{
			if (tab[j] > tab[j + 1])
				ft_swap(&tab[j], &tab[j + 1]);
			j++;
		}
	}
}

#include <stdio.h>

int	main(void)
{
	int		i;
	int	tab[16] = {6, 5, 3, 8, 0, 3, 6, 1, 2, 87, 26, 24, 43, 90, 23, 21};

	i = -1;
	while (++i < 16)
	{
		printf("%d, ", tab[i]);
	}
	ft_sort_int_tab(tab, 16);
	printf("\n");
	i = -1;
	while (++i < 16)
	{
		printf("%d, ", tab[i]);
	}
}
