/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_wstr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjouenne <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 19:41:15 by cjouenne          #+#    #+#             */
/*   Updated: 2023/07/26 20:04:34 by cjouenne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

#include <unistd.h>
#include <stdlib.h>

int	count_words(char *str)
{
	int	i;
	int	ctr;
	int	last;

	i = -1;
	last = 1;
	ctr = 0;
	while (str[++i])
	{
		if (last && str[i] != ' ')
		{
			last = 0;
			ctr++;
		}
		else if (!last && str[i] == ' ')
			last = 1;
	}
	return (ctr);
}

void	ft_putstr(char *str)
{
	int	i;

	i = -1;
	while (str[++i])
		write(1, &str[i], 1);
}

int	ft_strlen(char *str)
{
	int	i;

	i = -1;
	while (str[++i])
		;
	return (i);
}

char	*ft_strdup(char *str)
{
	int		i;
	char	*res;

	res = (char *) malloc(sizeof(char) * (ft_strlen(str) + 1));
	i = 0;
	while (str[i] && str[i] != ' ')
	{
		res[i] = str[i];
		i++;
	}
	res[i] = 0;
	return (res);
}

void	rev_wstr(int size, char *str)
{
	char		**tab;
	int			i;
	int			j;

	i = 0;
	j = 0;
	tab = (char **) malloc(sizeof(char *) * size);
	while (str[i])
	{
		if (str[i] != ' ')
		{
			printf("%s\n", &str[size - 1 - i]);
			j++;
			i += ft_strlen(&str[size - 1 - i]);
		}
	}
}

int	main(int argc, char *argv[])
{
	int	size;

	if (argc == 2)
	{
		size = count_words(argv[1]);
		rev_wstr(size, argv[1]);
	}
	printf("%d\n", count_words(argv[1]));
	write(1, "\n", 1);
	return (0);
}
