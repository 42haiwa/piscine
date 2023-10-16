/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjouenne <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 18:39:02 by cjouenne          #+#    #+#             */
/*   Updated: 2023/07/16 14:30:58 by cjouenne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int	ft_atoi(char *str)
{
	int	res;
	int	i;
	int	is_neg;

	i = -1;
	res = 0;
	is_neg = 0;
	while (str[++i])
	{
		if (!is_neg && str[i] == '-')
			is_neg = 1;
		else if (str[i] >= '0' && str[i] <= '9')
		{
			res += (str[i] - 48);
			res *= 10;
		}
	}
	res /= 10;
	if (is_neg)
		return (-res);
	return (res);
}

int	ft_atoi_char(char c)
{
	return ((int)(c - 48));
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = -1;
	while (str[++i])
	{
		ft_putchar(str[i]);
	}
}

void	ft_putnbr(int n)
{
	if (n == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (n < 0)
	{
		ft_putchar('-');
		n = -n;
	}
	if (n > 9)
	{
		ft_putnbr(n / 10);
		ft_putnbr(n % 10);
	}
	else
	{
		ft_putchar(n + 48);
	}
}
