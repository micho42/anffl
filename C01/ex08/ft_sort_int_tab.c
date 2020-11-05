/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: micho <micho@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/31 02:15:47 by micho             #+#    #+#             */
/*   Updated: 2020/11/03 03:53:34 by micho            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int a;
	int b;
	int c;

	a = 0;
	while (a < size)
	{
		b = 0;
		while (b < size)
		{
			if (tab[b - 1] > tab[b])
			{
				c = tab[b - 1];
				tab[b - 1] = tab[b];
				tab[b] = c;
			}
			++b;
		}
		a++;
	}
	return (c);
}
