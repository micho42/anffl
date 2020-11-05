/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: micho <micho@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/25 17:39:39 by jespark           #+#    #+#             */
/*   Updated: 2020/10/25 21:38:28 by micho            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>
#include <unistd.h>
#include <stdio.h>
#include "header.h"
#include "ft_algorithm.h"
#include "ft_table.h"

void	make_4_side(int *argv_arr, int (*dir)[4])
{
	int		i;
	int		index;

	index = 0;
	i = 0;
	while (index < 4)
		dir[UP][index++] = argv_arr[i++];
	index = 0;
	while (index < 4)
		dir[DOWN][index++] = argv_arr[i++];
	index = 0;
	while (index < 4)
		dir[LEFT][index++] = argv_arr[i++];
	index = 0;
	while (index < 4)
		dir[RIGHT][index++] = argv_arr[i++];
}

void	solve(int *arr)
{
	int		dir[4][4];
	int		check_bit[4];
	int		answer_table[4][4];

	make_4_side(arr, dir);
	ft_combination();
	init_arr(check_bit, 0);
	if (brutal_row(dir, 0, check_bit, answer_table))
		print_pretty(answer_table);
	else
		write(1, "Error\n", 6);
}

int		main(int argc, char **argv)
{
	int		arr[16];

	if (argc == 2)
	{
		if (!check_str(argv[1], arr))
			write(1, "Error\n", 6);
		else
			solve(arr);
	}
	else
		write(1, "Error\n", 6);
	return (0);
}
