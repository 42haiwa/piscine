/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operator.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjouenne <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 13:40:38 by cjouenne          #+#    #+#             */
/*   Updated: 2023/07/23 13:50:22 by cjouenne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "do_op.h"

int	ft_add(int n1, int n2)
{
	return (n1 + n2);
}

int	ft_sub(int n1, int n2)
{
	return (n1 - n2);
}

int	ft_mul(int n1, int n2)
{
	return (n1 * n2);
}

int	ft_div(int n1, int n2)
{
	return (n1 / n2);
}

int	ft_mod(int n1, int n2)
{
	return (n1 % n2);
}
