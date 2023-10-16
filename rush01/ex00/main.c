/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjouenne <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 18:00:15 by cjouenne          #+#    #+#             */
/*   Updated: 2023/07/16 18:44:22 by cjouenne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "skyscrapers.h"

#include <unistd.h>
#include <stdlib.h>

int	main(int argc, char *argv[])
{
	if (argc == 2)
		init_skyscrapers(argc, argv);
	return (0);
}
