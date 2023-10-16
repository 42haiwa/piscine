/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: event <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 12:26:09 by event             #+#    #+#             */
/*   Updated: 2023/07/05 21:41:25 by cjouenne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);
void	ft_print_not_repetitiv(char a, char b, char c);
void	ft_print_nbr(char a, char b, char c);
void	ft_print_comb(void);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_not_repetitiv(char a, char b, char c)
{
	if (!(a == b || b == c || c == a))
	{
		ft_print_nbr(a, b, c);
	}
}

void	ft_print_nbr(char a, char b, char c)
{
	ft_putchar(a);
	ft_putchar(b);
	ft_putchar(c);
	if (a == '7' && b == '8' && c == '9')
	{
		return ;
	}
	ft_putchar(',');
	ft_putchar(' ');
}

void	ft_print_comb(void)
{
	char	a;
	char	b;
	char	c;

	a = '0';
	b = '0';
	c = '0';
	while (a != '7' + 1)
	{
		while (b != '8' + 1)
		{
			while (c != '9' + 1)
			{
				ft_print_not_repetitiv(a, b, c);
				c++;
			}
			b++;
			c = b + 1;
		}
		b = a + 1;
		a++;
	}
}
