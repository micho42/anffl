/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: micho <micho@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 23:49:26 by micho             #+#    #+#             */
/*   Updated: 2020/11/03 03:45:30 by micho            ###   ########.fr       */
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

char	*ft_strcapitalize(char *str)
{
	int		index;
	char	current;
	char	before;

	ft_strlowcase(str);
	index = 0;
	while (true)
	{
		current = str[index];
		before = str[index - 1];
		if (current == '\0')
			break ;
		if (str[0] >= 'a' && str[0] <= 'z')
			str[0] = current - 32;
		if (!((before >= 'A' && before <= 'Z')
					|| (before >= 'a' && before <= 'z')
					|| (before >= '0' && before <= '9'))
				&& (current >= 'a' && current <= 'z'))
			str[index] = current - 32;
		index++;
	}
	return (str);
}
