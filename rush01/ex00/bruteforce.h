/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bruteforce.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjouenne <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 15:18:25 by cjouenne          #+#    #+#             */
/*   Updated: 2023/07/16 18:40:57 by cjouenne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRUTEFORCE_H
# define BRUTEFORCE_H

void	change_line(int **grid, int raw, const int *src);
void	bruteforce(int **views, int **grid);
void	bruteforce_ext(int **views, int **grid, int index[]);
#endif
