/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjouenne <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 14:11:28 by cjouenne          #+#    #+#             */
/*   Updated: 2023/07/10 17:37:58 by cjouenne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

int	ft_atoi(char *str)
{
	int	i;
	int	minus_nbr;
	int	number_started;
	int	result;

	i = 0;
	number_started = 0;
	result = 0;
	minus_nbr = ft_minus_ctr(str);
	while (str[i])
	{
		if (ft_is_number(str[i]))
			ft_result_updater(str, &i, &result, &number_started);
		if (!ft_is_number(str[i]) && number_started)
			break ;
		i++;
	}
	if (minus_nbr % 2 != 0)
		result = -result;
	return (result);
}
