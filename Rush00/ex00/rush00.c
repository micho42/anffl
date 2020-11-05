/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyokwon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/17 19:15:44 by hyokwon           #+#    #+#             */
/*   Updated: 2020/10/17 19:54:05 by hyokwon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	print_pattern(int x, int y, int x_length, int y_length)
{
	if (y == 1 || y == y_length)
	{
		if (x == 1)
			ft_putchar('o');
		else if (x == x_length)
			ft_putchar('o');
		else
			ft_putchar('-');
	}
	else
	{
		if (x == 1 || x == x_length)
			ft_putchar('|');
		else
			ft_putchar(' ');
	}
}

void	rush(int x, int y)
{
	int	x_index;
	int	y_index;

	y_index = 1;
	while (y_index <= y)
	{
		x_index = 1;
		while (x_index <= x)
		{
			print_pattern(x_index, y_index, x, y);
			x_index++;
		}
		ft_putchar('\n');
		y_index++;
	}
}
