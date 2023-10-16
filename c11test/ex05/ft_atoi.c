/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjouenne <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 16:11:01 by cjouenne          #+#    #+#             */
/*   Updated: 2023/07/26 15:27:34 by cjouenne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "do_op.h"

int	ft_is_number(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

int	ft_minus_ctr(char *str)
{
	int	i;
	int	minus_nbr;

	i = 0;
	minus_nbr = 0;
	while (str[i])
	{
		if (str[i] == '-')
		{
			minus_nbr++;
			i++;
			continue ;
		}
		if (ft_is_number(str[i]))
			break ;
		i++;
	}
	return (minus_nbr);
}

void	ft_result_updater(char *str, int *i, int *result, int *number_started)
{
	if (!(*number_started))
		*number_started = 1;
	*result *= 10;
	*result += str[*i] - 48;
}

int	ft_is_whitespace(char c)
{
	if (c == '\t' || c == '\r' || c == '\n'
		|| c == '\v' || c == '\f')
		return (1);
	return (0);
}

int	ft_atoi(char *str)
{
	int				n;
	int				s;
	unsigned int	i;

	n = 0;
	s = 1;
	i = 0;
	while (str[i] == ' ' || ('\t' <= str[i] && str[i] <= '\r'))
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			s = -s;
		i++;
	}
	while ('0' <= str[i] && str[i] <= '9')
		n = (n * 10) + (str[i++] - '0');
	return (n * s);
}
