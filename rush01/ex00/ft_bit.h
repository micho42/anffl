/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jespark <jespark@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/25 19:57:11 by jespark           #+#    #+#             */
/*   Updated: 2020/10/25 20:01:46 by jespark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BIT_H
# define FT_BIT_H
# include <stdbool.h>

void	check_bit_off(int *check_bit, int left, int right, int index);
void	check_on_bit(int *check_bit, int left, int right, int index);
bool	is_success(int *check_bit, int *lr_arr,
		int index, int (*answer_table)[4]);

#endif
