/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjouenne <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 22:06:24 by cjouenne          #+#    #+#             */
/*   Updated: 2023/07/25 13:38:20 by cjouenne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char **tab, int length, int (*f)(char*))
{
	int	cnt;
	int	i;

	i = -1;
	cnt = 0;
	while (++i < length)
		if (f(tab[i]))
			cnt++;
	return (cnt);
}
