/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjouenne <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 00:52:23 by cjouenne          #+#    #+#             */
/*   Updated: 2023/07/13 14:05:51 by cjouenne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

int	ft_get_size(int size, char *sep, char **strs)
{
	int	l;
	int	i;

	i = 0;
	l = 0;
	while (i < size - 1)
	{
		l += ft_strlen(strs[i++]) + ft_strlen(sep);
	}
	l += ft_strlen(sep);
	return (l);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	char	*res;

	if (size == 0)
	{
		res = (char *) malloc(sizeof(char));
		*res = 0;
		return (res);
	}
	i = 0;
	res = (char *) malloc(sizeof(char) * ft_get_size(size, sep, strs));
	while (i < size - 1)
	{
		ft_strcat(res, strs[i]);
		ft_strcat(res, sep);
		i++;
	}
	ft_strcat(res, strs[i]);
	return (res);
}
/*
int	main(void)
{
	char *strs[3] = {"salut", "les", "gars"};
	printf("%s\n", ft_strjoin(3, strs, "//"));
}
*/
