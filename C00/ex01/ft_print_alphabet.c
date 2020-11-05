/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: micho <micho@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/26 18:29:09 by micho             #+#    #+#             */
/*   Updated: 2020/10/31 20:52:40 by micho            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	char letter_a;

	letter_a = 'a';
	while (letter_a <= 'z')
	{
		write(1, &letter_a, 1);
		letter_a++;
	}
}
