/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: micho <micho@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/26 21:34:16 by micho             #+#    #+#             */
/*   Updated: 2020/10/31 11:40:09 by micho            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char letter_z;

	letter_z = 'z';
	while (letter_z >= 'a')
	{
		write(1, &letter_z, 1);
		letter_z--;
	}
}
