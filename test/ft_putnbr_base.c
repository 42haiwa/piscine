/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjouenne <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 13:01:40 by cjouenne          #+#    #+#             */
/*   Updated: 2023/07/22 14:03:18 by cjouenne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = -1;
	while (str[++i])
		;
	return (i);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr_base(int n, char *base)
{
	if (n < 0)
	{
		ft_putchar('-');
		n *= -1;
	}
	if (n < ft_strlen(base))
		ft_putchar(base[n]);
	if (n >= ft_strlen(base))
	{
		ft_putnbr_base(n / ft_strlen(base), base);
		ft_putnbr_base(n % ft_strlen(base), base);
	}
}

void	put_base64(char *str)
{
	int	i;

	i = -1;
	while (str[++i])
	{
		ft_putnbr_base(str[i], "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/");
	}
}

void	put_base(char *str, char *base)
{
	int	i;

	i = -1;
	while (str[++i])
		ft_putnbr_base(str[i], base);
}

int	main(int argc, char *argv[])
{
	(void) argc;
	put_base(argv[1], argv[2]);
}
