/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_op_major.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlima <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/10 19:59:26 by rlima             #+#    #+#             */
/*   Updated: 2018/11/10 21:24:12 by rlima            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_evalexpr.h"

int		ft_op_major(void)
{
	int		result;
	char	operand;

	result = ft_verificare();
	while (ft_gets() == '*' || ft_gets() == '/' || ft_gets() == '%')
	{
		operand = ft_next();
		if (operand == '*')
			result = result * ft_verificare();
		else if (operand == '/')
			result = result / ft_verificare();
		else
			result = result % ft_verificare();
	}
	return (result);
}
