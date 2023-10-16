/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjouenne <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 17:38:39 by cjouenne          #+#    #+#             */
/*   Updated: 2023/07/26 18:15:30 by cjouenne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	in_base(char c, char *base, int *index)
{
	int	i;

	i = -1;
	while (base[++i])
	{
		if (c == base[i])
		{
			*index = i;
			return (1);
		}
	}
	return (0);
}

int	ft_strlen(char *str)
{
	int	i;

	i = -1;
	while (str[++i])
		;
	return (i);
}

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	res;
	int	neg;
	int	index;

	i = 0;
	neg = 0;
	res = 0;
	while (str[i] == ' '
		|| (str[i] >= 9 && str[i] <= 13))
		i++;
	while (str[i] == '+' || str[i] == '-')
		if (str[i++] == '-')
			neg++;
	while (in_base(str[i++], base, &index))
		res = (res * ft_strlen(base)) + index;
	if (neg % 2)
		return (res *= -1);
	return (res);
}
/*
#include <stdio.h>
#include <stdlib.h>

int    main(int argc, char *argv[])
{
    if (1 < argc)
    {
        printf("ft_atoi_base = '%d'\n", ft_atoi_base(argv[1], argv[2]));
    }
    else
        printf("required 'nb' 'base'\n");
}
*/
