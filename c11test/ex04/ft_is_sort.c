/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjouenne <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 23:01:01 by cjouenne          #+#    #+#             */
/*   Updated: 2023/07/25 18:38:14 by cjouenne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_tab_decrease(int *tab, int length, int (*f)(int, int))
{
	int	decrease;
	int	i;

	decrease = 1;
	i = -1;
	while (++i < length - 1)
		if (f(tab[i], tab[i + 1]) < 0)
			decrease = 0;
	return (decrease);
}

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int	i;
	int	decrease;

	i = -1;
	decrease = ft_is_tab_decrease(tab, length, f);
	while (++i < length - 1)
	{
		if (decrease)
		{
			if (f(tab[i], tab[i + 1]) < 0)
				return (0);
			continue ;
		}
		if (f(tab[i], tab[i + 1]) > 0)
			return (0);
	}
	return (1);
}
