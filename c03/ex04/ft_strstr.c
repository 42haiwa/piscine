/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjouenne <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 11:38:34 by cjouenne          #+#    #+#             */
/*   Updated: 2023/07/09 12:59:22 by cjouenne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strstr(char *str, char *to_find)
{
	char	*h;
	char	*n;

	h = 0;
	n = 0;
	if (to_find[0] == '\0')
	{
		return ((char *) str);
	}
	while (str[0] != '\0')
	{
		h = str;
		n = to_find;
		while (*n != '\0' && *h == *n)
		{
			h++;
			n++;
		}
		if (*n == '\0')
		{
			return ((char *) str);
		}
		str++;
	}
	return (0);
}
