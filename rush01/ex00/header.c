/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jespark <jespark@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/25 17:57:01 by jespark           #+#    #+#             */
/*   Updated: 2020/10/25 18:04:50 by jespark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>
#include <unistd.h>

bool	check_str(char *str, int *arr)
{
	int		index;
	char	cur;

	index = 0;
	while (*str)
	{
		cur = *str;
		if (cur == ' ')
			str++;
		else if (!(cur >= '1' && cur <= '4'))
			return (false);
		else
		{
			arr[index] = cur - '0';
			str++;
			index++;
		}
	}
	return (true);
}

void	init_arr(int *arr, int num)
{
	int		i;

	i = 0;
	while (i < 4)
		arr[i++] = num;
}

void	init_2arr_zero(int (*arr)[4])
{
	int		i;
	int		j;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			arr[i][j] = 0;
			j++;
		}
		i++;
	}
}

void	print_pretty(int (*answer_table)[4])
{
	int		i;
	int		j;
	char	letter;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			letter = answer_table[i][j] + '0';
			write(1, &letter, 1);
			write(1, " ", 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}
