/* ************************************************************************** */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjouenne <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 16:19:44 by cjouenne          #+#    #+#             */
/*   Updated: 2023/07/13 15:28:34 by cjouenne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb <= 1)
		return (0);
	if (nb == 2)
		return (1);
	if (nb % 2 == 0)
		return (0);
	while (i <= nb / i)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	int	i;

	i = nb;
	if (ft_is_prime(nb))
		return (nb);
	while (!ft_is_prime(i))
		i++;
	return (i);
}

#include <stdio.h>
#include <stdlib.h>

int	main(int argc, char *argv[])
{
	(void) argc;
	printf("%d\n", ft_find_next_prime(atoi(argv[1])));
}
