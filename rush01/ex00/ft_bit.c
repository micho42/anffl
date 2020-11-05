/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bit.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: micho <micho@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/25 19:56:25 by jespark           #+#    #+#             */
/*   Updated: 2020/10/25 20:33:53 by micho            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>
#include "header.h"

void	check_bit_off(int *check_bit, int left, int right, int index)
{
	int		i;

	i = 0;
	while (i < 4)
	{
		check_bit[i] &= ~(1 << (g_table[left - 1][right - 1][index][i] - 1));
		i++;
	}
}

void	check_on_bit(int *check_bit, int left, int right, int index)
{
	int		i;

	i = 0;
	while (i < 4)
	{
		check_bit[i] |= (1 << (g_table[left - 1][right - 1][index][i] - 1));
		i++;
	}
}

bool	is_success(int *check_bit, int *lr_arr,
		int index, int (*answer_table)[4])
{
	int		i;
	int		left;
	int		right;
	int		ord;
	bool	set_success;

	left = lr_arr[0];
	right = lr_arr[1];
	ord = lr_arr[2];
	i = 0;
	set_success = 1;
	while (i < 4)
	{
		if (check_bit[i] & (1 << (g_table[left - 1][right - 1][index][i] - 1)))
		{
			set_success = 0;
			break ;
		}
		else
		{
			answer_table[ord][i] = g_table[left - 1][right - 1][index][i];
		}
		i++;
	}
	return (set_success);
}
