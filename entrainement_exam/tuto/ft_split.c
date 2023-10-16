/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjouenne <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 21:06:43 by cjouenne          #+#    #+#             */
/*   Updated: 2023/07/26 21:41:19 by cjouenne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

#include <stdio.h>

int	is_sep(char c, char *charset)
{
	int	i;

	i = -1;
	while (charset[++i])
		if (charset[i] == c)
			return (1);
	return (0);
}

int	count_words(char *str, char *charset)
{
	int	i;
	int	d;
	int	cnt;

	i = -1;
	d = 1; // si le prochain caractere doit etre detecte
	cnt = 0;
	while (str[++i])
	{
		if (d && !is_sep(str[i], charset))
		{
			d = 0;
			cnt++;
		}
		else if (!d && is_sep(str[i], charset))
			d = 1;
	}
	return (cnt);
}

int	ft_strlen(char *str, char *charset)
{
	int	i;

	i = -1;
	while (str[++i] && !is_sep(str[i], charset))
		;
	return (i);
}

char	*ft_strdup(char *str, char *charset)
{
	int		i;
	char	*res;

	i = -1;
	res = malloc(ft_strlen(str, charset) + 1);
	if (res == NULL)
		return (NULL);
	while (str[++i] && !is_sep(str[i], charset))
	{
		res[i] = str[i];
	}
	res[i] = 0;
	return (res);
}

char	**ft_split(char *str, char *charset)
{
	char	**tab;
	int		j;

	tab = (char **) malloc(sizeof(char *) * count_words(str, charset));
	if (tab == NULL)
		return (NULL);
	j = 0;
	while (*str)
	{
		if (!is_sep(*str, charset))
		{
			tab[j] = ft_strdup(str, charset);
			j++;
			str += ft_strlen(str, charset);
		}
		str++;
	}
	return (tab);
}
#include <stdio.h>

int    main(int argc, char *argv[])
{
    char    **split;

    if (2 < argc)
    {
        split = ft_split(argv[1], argv[2]);
        while (*split)
            printf("%s\n", *(split++));
    }
    else
        printf("required 'str' 'charset'\n");
}
