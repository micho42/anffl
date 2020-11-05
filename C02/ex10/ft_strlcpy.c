/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: micho <micho@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/31 23:19:07 by micho             #+#    #+#             */
/*   Updated: 2020/11/02 19:06:44 by micho            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int a;

	a = 0;
	while (a < size && src[a] != '\0')
	{
		dest[a] = src[a];
		a++;
	}
	while (a < size)
	{
		dest[a] = '\0';
		a++;
	}
	return (a - 1);
}
