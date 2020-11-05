/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: micho <micho@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/25 18:07:08 by micho             #+#    #+#             */
/*   Updated: 2020/10/25 18:11:50 by micho            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H
# include <stdbool.h>
# define UP 0
# define DOWN 1
# define LEFT 2
# define RIGHT 3

bool	check_str(char *str, int *arr);
void	init_arr(int *arr, int num);
void	init_2arr_zero(int(*arr)[4]);
void	print_pretty(int(*answer_table)[4]);

int		g_table[4][4][6][4];
int		g_last_index[4][4];

#endif
