/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlima <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/10 16:44:56 by rlima             #+#    #+#             */
/*   Updated: 2018/11/10 17:16:01 by rlima            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/evalexpr.h"

int   is_operator(char c)
{
  if (c == '+' || c == '-' || c == '%')
    return (1);
  if (c == '*' || c == '/')
    return (1);
  return (0);
}

int		is_operaand(char c)
{
  if (!is_operator(c) && !is_right_paren(c) && !is_left_paren(c))
	  return (1);
  return (0);
}

int		token_size(char *str)
{
	int		len;

	len = 0;
	if (is_operand(*str))
	{
	  while (!is_space(*str) && is_operand(*str) && *str)
	  {
		  ++len;
		  ++str;
	  }
	}
	else
	{
	  return (1);
	}
	return (len);
}

int		precedence(char c)
{
	if (c == '*' || c == '/' || c == '%')
		return (3);
	if (c == '+' || c == '-')
		return (2);
	return (0);
}

int   num_parens(char *str)
{
  int count;
  count = 0;
  while (*str)
	{
	  if (is_left_paren(*str) || is_right_paren(*str))
      count++;
		++str;
	}

  return (count);
}
