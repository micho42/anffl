/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: micho <micho@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/31 22:48:51 by micho             #+#    #+#             */
/*   Updated: 2020/11/02 13:29:30 by micho            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>

int		ft_str_is_printable(char *str)
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
		if (!(b >= ' ') || b == 127)
		{
			c = false;
			break ;
		}
		a++;
	}
	return (c);
}
