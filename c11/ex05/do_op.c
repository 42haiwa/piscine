/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjouenne <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 13:48:15 by cjouenne          #+#    #+#             */
/*   Updated: 2023/07/27 00:02:37 by cjouenne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

#include "do_op.h"

void	calc(int n1, int n2, int (*f)(int, int))
{
	if (n2 == 0)
	{
		if (f == &ft_div)
		{
			ft_putstr("Stop : division by zero");
			return ;
		}
		if (f == &ft_mod)
		{
			ft_putstr("Stop : modulo by zero");
			return ;
		}
	}
	ft_putnbr(f(n1, n2));
}

void	de_op(int n1, char *op, int n2)
{
	int	(*f[5])(int, int);

	f[0] = &ft_add;
	f[1] = &ft_sub;
	f[2] = &ft_mul;
	f[3] = &ft_div;
	f[4] = &ft_mod;
	if (op[1])
	{
		ft_putnbr(0);
		return ;
	}
	if (op[0] == '+' && !op[1])
		calc(n1, n2, f[0]);
	else if (op[0] == '-' && !op[1])
		calc(n1, n2, f[1]);
	else if (op[0] == '*' && !op[1])
		calc(n1, n2, f[2]);
	else if (op[0] == '/' && !op[1])
		calc(n1, n2, f[3]);
	else if (op[0] == '%' && !op[1])
		calc(n1, n2, f[4]);
	else
		ft_putnbr(0);
}

int	main(int argc, char *argv[])
{
	if (argc != 4)
		return (0);
	de_op(ft_atoi(argv[1]), argv[2], ft_atoi(argv[3]));
	ft_putchar('\n');
	return (0);
}
