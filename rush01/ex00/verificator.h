/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   verificator.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjouenne <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 14:41:52 by cjouenne          #+#    #+#             */
/*   Updated: 2023/07/16 18:22:29 by cjouenne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VERIFICATOR_H
# define VERIFICATOR_H

int	verify_col(int **grid, int col);
int	verify_grid(int **views, int **grid);
int	verify_view_col(int **views, int **grid, int col);
int	verify_view_raw(int **views, int **grid, int raw);
#endif
