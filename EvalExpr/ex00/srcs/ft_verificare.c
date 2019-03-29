/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_verificare.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlima <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/10 20:33:32 by rlima             #+#    #+#             */
/*   Updated: 2018/11/10 21:25:36 by rlima            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_evalexpr.h"

int		ft_verificare(void)
{
	int result;

	if (ft_gets() >= '0' && ft_gets() <= '9')
		return (ft_atoi());
	else if (ft_gets() == '(')
	{
		ft_next();
		result = ft_op_minor();
		ft_next();
		return (result);
	}
	else if (ft_gets() == '-')
	{
		ft_next();
		return (-ft_verificare());
	}
	return (0);
}
