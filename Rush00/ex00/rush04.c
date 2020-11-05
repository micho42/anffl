/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyokwon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/17 17:49:43 by hyokwon           #+#    #+#             */
/*   Updated: 2020/10/17 19:54:46 by hyokwon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	print_pattern(int x, int y, int x_length, int y_length)
{
	if (y == 1)
	{
		if (x == 1)
			ft_putchar('A');
		else if (x == x_length)
			ft_putchar('C');
		else
			ft_putchar('B');
	}
	else if (y == y_length)
	{
		if (x == 1)
			ft_putchar('C');
		else if (x == x_length)
			ft_putchar('A');
		else
			ft_putchar('B');
	}
	else
	{
		if (x == 1 || x == x_length)
			ft_putchar('B');
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
