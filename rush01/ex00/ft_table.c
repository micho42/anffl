/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_table.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: micho <micho@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/25 17:46:29 by micho             #+#    #+#             */
/*   Updated: 2020/10/25 19:07:53 by micho            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"
#include "ft_algorithm.h"

void	ft_update_table(int *arr)
{
	int		i;
	int		left;
	int		right;
	int		last;

	left = ret_left(arr);
	right = ret_right(arr);
	last = g_last_index[left - 1][right - 1];
	i = 0;
	while (i < 4)
	{
		g_table[left - 1][right - 1][last][i] = arr[i];
		i++;
	}
	g_last_index[left - 1][right - 1]++;
}

void	ft_recursive(int *arr, int ord, int bit)
{
	int		temp_bit;

	arr[ord] = 1;
	while (arr[ord] <= 4)
	{
		temp_bit = 1 << (arr[ord] - 1);
		if (bit & temp_bit)
		{
			arr[ord]++;
			continue;
		}
		bit |= temp_bit;
		if (ord != 3)
		{
			ft_recursive(arr, ord + 1, bit);
		}
		else
		{
			ft_update_table(arr);
		}
		temp_bit = (1 << (arr[ord] - 1));
		bit &= ~temp_bit;
		arr[ord]++;
	}
}

void	ft_combination(void)
{
	int	arr[4];
	int bit;

	bit = 0;
	init_arr(arr, 1);
	init_2arr_zero(g_last_index);
	ft_recursive(arr, 0, bit);
}
