/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjouenne <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 12:56:31 by cjouenne          #+#    #+#             */
/*   Updated: 2023/07/19 13:11:34 by cjouenne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_whitespace(char c)
{
	if (c == ' ' || c == '\n' || c == '\f'
		|| c == '\r' || c == '\t' || c == '\v')
		return (1);
	return (0);
}

int	ft_atoi(char *str)
{
	int	i;
	int	res;
	int	is_neg;

	i = -1;
	res = 0;
	is_neg = 0;
	while (str[++i])
	{
		if (!res && ft_is_whitespace(str[i]))
			continue ;
		if (!res && (str[i] == '-'))
			is_neg++;
		if (str[i] >= '0' && str[i] <= '9')
		{
			res += (int)(str[i] - 48);
			res *= 10;
		}
		if (res != 0 && !(str[i] >= '0' && str[i] <= '9'))
			break ;
	}
	res /= 10;
	if (is_neg % 2 == 0)
		return (-res);
	return (res);
}

#include <stdio.h>

int	main(int argc, char *argv[])
{
	(void) argc;
	printf("%d\n", ft_atoi(argv[1]));
}
