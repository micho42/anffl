/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: micho <micho@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/01 13:14:49 by micho             #+#    #+#             */
/*   Updated: 2020/11/04 14:08:17 by micho            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>

char	*ft_strstr(char *str, char *to_find)
{
	char *i;
	char *j;

	if (*to_find == '\0')
		return (str);
	i = str;
	j = to_find;
	while (true)
	{
		if (*j == '\0')
			return ((char *)(i - (j - to_find)));
		if (*i == *j)
			j++;
		else
			j = to_find;
		if (*i == '\0')
			break ;
		i++;
	}
	return (0);
}
