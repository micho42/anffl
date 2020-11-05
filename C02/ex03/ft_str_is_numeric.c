/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: micho <micho@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/31 22:47:48 by micho             #+#    #+#             */
/*   Updated: 2020/11/02 13:26:04 by micho            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>

int		ft_str_is_numeric(char *str)
{
	int		a;
	char	b;
	bool	c;

	a = 0;
	c = true;
	while (true)
	{
		b = str[a];
		if (b == '\0')
			break ;
		if (!(b >= '0' && b <= '9'))
		{
			c = false;
			break ;
		}
		a++;
	}
	return (c);
}
