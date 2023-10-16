/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjouenne <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 23:27:40 by cjouenne          #+#    #+#             */
/*   Updated: 2023/07/09 11:36:45 by cjouenne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *src)
{
	unsigned int	i;

	i = 0;
	while (src[i])
		i++;
	return (i);
}

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	d_size;

	i = 0;
	d_size = ft_strlen(dest);
	while (src[i] && nb > 0)
	{
		dest[d_size + i] = src[i];
		i++;
		nb--;
	}
	dest[d_size + i] = '\0';
	return (dest);
}
