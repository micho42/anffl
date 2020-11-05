/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: micho <micho@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/31 23:15:31 by micho             #+#    #+#             */
/*   Updated: 2020/11/02 13:31:26 by micho            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>

char	*ft_strlowcase(char *str)
{
	int		a;
	char	b;

	a = 0;
	while (true)
	{
		b = str[a];
		if (b == '\0')
			break ;
		if (b >= 'A' && b <= 'Z')
		{
			str[a] = b + 32;
		}
		a++;
	}
	return (str);
}
