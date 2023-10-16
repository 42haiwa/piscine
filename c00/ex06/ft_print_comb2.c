/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: event <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 15:26:43 by event             #+#    #+#             */
/*   Updated: 2023/07/22 15:52:20 by cjouenne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);
void	ft_print_nbr(int n1, int n2);
void	ft_print_comb2(void);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_nbr(int n1, int n2)
{
	int	n1_;
	int	n2_;
	int	bn1;
	int	bn2;

	bn1 = n1;
	bn2 = n2;
	n1_ = n1 / 10;
	n1 %= 10;
	n2_ = n2 / 10;
	n2 %= 10;
	ft_putchar(((char) n1_) + 48);
	ft_putchar(((char) n1) + 48);
	ft_putchar(' ');
	ft_putchar(((char) n2_) + 48);
	ft_putchar(((char) n2) + 48);
	if ((bn1 == 98) && (bn2 == 99))
	{
		return ;
	}
	ft_putchar(',');
	ft_putchar(' ');
}

void	ft_print_comb2(void)
{
	int	n1;
	int	n2;

	n1 = 0;
	n2 = 0;
	while (n1 <= 99)
	{
		while (n2 <= 99)
		{
			ft_print_nbr(n1, n2);
			n2++;
		}
		n1++;
		n2 = n1 + 1;
	}
}
