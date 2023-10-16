/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_string_tab.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjouenne <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 18:44:27 by cjouenne          #+#    #+#             */
/*   Updated: 2023/07/23 22:54:47 by cjouenne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

int	ft_tab_size(char **tab)
{
	int	i;

	i = -1;
	while (tab[++i])
		;
	return (i);
}

void	ft_swap_ptr(char **addr1, char **addr2)
{
	char	*tmp;

	tmp = *addr1;
	*addr1 = *addr2;
	*addr2 = tmp;
}

void	ft_sort_string_tab(char **tab)
{
	int		i;
	int		j;
	int		size;

	i = -1;
	size = ft_tab_size(tab);
	while (++i < size)
	{
		j = 0;
		while (j < (size - i) - 1)
		{
			if (ft_strcmp(tab[j], tab[j + 1]) > 0)
			{
				ft_swap_ptr(&tab[j], &tab[j + 1]);
			}
			j++;
		}
	}
}
