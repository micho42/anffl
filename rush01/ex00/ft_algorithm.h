/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_algorithm.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: micho <micho@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/25 18:09:11 by jespark           #+#    #+#             */
/*   Updated: 2020/10/25 19:16:09 by micho            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_ALGORITHM_H
# define FT_ALGORITHM_H
# include <stdbool.h>

int		ret_left(int *arr);
int		ret_right(int *arr);
bool	check_col(int (*dir)[4], int ord, int (*answer_table)[4]);
bool	brutal_row(int (*dir)[4], int ord,
					int *check_bit, int (*answer_table)[4]);

#endif
