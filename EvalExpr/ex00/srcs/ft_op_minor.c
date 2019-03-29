/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_op_minor.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlima <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/10 19:59:50 by rlima             #+#    #+#             */
/*   Updated: 2018/11/10 21:21:21 by rlima            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_evalexpr.h"

int			ft_op_minor(void)
{
	int result;

	result = ft_op_major();
	while (ft_gets() == '+' || ft_gets() == '-')
	{
		if (ft_next() == '+')
			result = result + ft_op_major();
		else
			result = result - ft_op_major();
	}
	return (result);
}
