/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: micho <micho@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/31 22:47:51 by micho             #+#    #+#             */
/*   Updated: 2020/11/02 13:24:25 by micho            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>

int		ft_str_is_alpha(char *str)
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
		if (!((b >= 'a' && b <= 'z') || (b >= 'A' && b <= 'Z')))
		{
			c = false;
			break ;
		}
		a++;
	}
	return (c);
}
