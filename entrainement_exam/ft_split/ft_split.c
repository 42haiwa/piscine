/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjouenne <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 19:00:12 by cjouenne          #+#    #+#             */
/*   Updated: 2023/07/26 19:37:05 by cjouenne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

#include <stdlib.h>

int	is_sep(char c, char *charset)
{
	int	i;

	i = -1;
	while (charset[++i])
		if (c == charset[i])
			return (1);
	return (0);
}

int	ft_count_words(char *str, char *charset)
{
	int	i;
	int	last;
	int	ctr;

	i = 0;
	last = 1;
	ctr = 0;
	while (str[++i])
	{
		if (last && !is_sep(str[i], charset))
		{
			last = 0;
			ctr++;
		}
		else if (is_sep(str[i], charset))
			last = 1;
	}
	return (ctr);
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
	char	*res;
	int		i;

	i = 0;
	res = (char *) malloc(sizeof(char) * (ft_strlen(str, charset) + 1));
	while (str[i] && !is_sep(str[i], charset))
	{
		res[i] = str[i];
		i++;
	}
	res[i] = 0;
	return (res);
}

char	**ft_split(char *str, char *charset)
{
	char	**tab;
	int		i;

	i = 0;
	tab = (char **) malloc(sizeof(char *) * (ft_count_words(str, charset) + 1));
	if (tab == NULL)
		return (NULL);
	while (*str)
	{
		if (!is_sep(*str, charset))
		{
			tab[i] = ft_strdup(str, charset);
			str += ft_strlen(str, charset);
			i++;
		}
		else
			str++;
	}
	return (tab);
}

int    main(int argc, char *argv[])
{
    char    **split;

    if (2 < argc)
    {
        split = ft_split(argv[1], argv[2]);
        while (*split)
	{
            printf("%s\n", *(split));
	    free(*(split++));
	}
    }
    else
        printf("required 'str' 'charset'\n");
}
