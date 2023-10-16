/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   skyscrapers.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjouenne <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 18:30:34 by cjouenne          #+#    #+#             */
/*   Updated: 2023/07/16 10:21:39 by cjouenne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SKYSCRAPERS_H
# define SKYSCRAPERS_H

void	init_skyscrapers(int argc, char *argv[]);
void	parse_argv(int argc, char *argv[], int **views);
void	is_valid(int **views);
#endif
