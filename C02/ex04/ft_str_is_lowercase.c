/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: micho <micho@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/31 22:48:23 by micho             #+#    #+#             */
/*   Updated: 2020/11/02 13:27:37 by micho            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>

int		ft_str_is_lowercase(char *str)
{
	int		a;
	char	b;
	bool	c;

	c = true;
	a = 0;
	while (true)
	{
		b = str[a];
		if (b == '\0')
			break ;
		if (!(b >= 'a' && b <= 'z'))
		{
			c = false;
			break ;
		}
		a++;
	}
	return (c);
}
