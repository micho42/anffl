/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_algorithm.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: micho <micho@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/25 18:16:26 by micho             #+#    #+#             */
/*   Updated: 2020/10/25 20:28:30 by micho            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>
#include "header.h"
#include "ft_algorithm.h"
#include "ft_bit.h"

int		ret_left(int *arr)
{
	int left;
	int largest;
	int	i;

	left = 1;
	largest = arr[0];
	i = 1;
	while (i < 4)
	{
		if (largest < arr[i])
		{
			largest = arr[i];
			left++;
		}
		i++;
	}
	return (left);
}

int		ret_right(int *arr)
{
	int right;
	int largest;
	int	i;

	right = 1;
	largest = arr[3];
	i = 2;
	while (i >= 0)
	{
		if (largest < arr[i])
		{
			largest = arr[i];
			right++;
		}
		i--;
	}
	return (right);
}

bool	check_col(int (*dir)[4], int ord, int (*answer_table)[4])
{
	int		cp_arr[4];
	int		i;

	i = 0;
	while (i < 4)
	{
		cp_arr[i] = answer_table[i][ord];
		i++;
	}
	if (ret_left(cp_arr) == dir[UP][ord] && ret_right(cp_arr) == dir[DOWN][ord])
	{
		if (ord == 3)
			return (true);
		if (check_col(dir, ord + 1, answer_table))
		{
			return (true);
		}
	}
	return (false);
}

bool	brutal_row(int (*dir)[4], int ord, int *check_bit, int (*ans_table)[4])
{
	int		lr_arr[4];

	lr_arr[0] = dir[LEFT][ord];
	lr_arr[1] = dir[RIGHT][ord];
	lr_arr[2] = ord;
	lr_arr[3] = 0;
	while (lr_arr[3] < g_last_index[lr_arr[0] - 1][lr_arr[1] - 1])
	{
		if (is_success(check_bit, lr_arr, lr_arr[3], ans_table))
		{
			check_on_bit(check_bit, lr_arr[0], lr_arr[1], lr_arr[3]);
			if (ord == 3)
			{
				if (check_col(dir, 0, ans_table))
					return (true);
				check_bit_off(check_bit, lr_arr[0], lr_arr[1], lr_arr[3]);
			}
			else if (brutal_row(dir, ord + 1, check_bit, ans_table))
				return (true);
			else
				check_bit_off(check_bit, lr_arr[0], lr_arr[1], lr_arr[3]);
		}
		lr_arr[3]++;
	}
	return (false);
}
