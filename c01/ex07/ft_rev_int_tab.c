/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: event <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 11:25:17 by event             #+#    #+#             */
/*   Updated: 2023/07/06 13:07:47 by event            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size);

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	bck;

	i = 0;
	while (i < size / 2)
	{
		bck = tab[size - (i + 1)];
		tab[size - (i + 1)] = tab[i];
		tab[i++] = bck;
	}
}
