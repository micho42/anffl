/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: micho <micho@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 01:58:29 by micho             #+#    #+#             */
/*   Updated: 2020/11/04 18:55:56 by micho            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>

int		ft_sqrt(int nb)
{
	unsigned int	index;
	unsigned int	sqrt;

	if (nb < 0)
		return (0);
	if (nb <= 1)
		return (nb);
	index = 0;
	while ((sqrt = index * index) < (unsigned int)nb)
		index++;
	index -= 1;
	return (index);
}

int		ft_is_prime(int nb)
{
	int i;
	int j;

	if (nb <= 1)
		return (0);
	if (nb <= 3)
		return (1);
	if (nb % 2 == 0 || nb % 3 == 0)
		return (0);
	i = 2;
	j = ft_sqrt(nb);
	while ((i <= j) && (nb % i != 0))
		i++;
	return (i > j);
}

int		ft_find_next_prime(int nb)
{
	while (true)
	{
		if (ft_is_prime(nb))
			return (nb);
		nb++;
	}
}
