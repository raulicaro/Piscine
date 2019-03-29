/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   evalexpr.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlima <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/10 15:38:17 by rlima             #+#    #+#             */
/*   Updated: 2018/11/10 21:10:48 by rlima            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_EVALEXPR_H
# define FT_EVALEXPR_H

char		*g_str;
int			eval_expr(char *str);
void		ft_putchar(char c);
void		ft_putnbr(int nb);
char		*ft_split_whitespaces(void);
char		ft_gets();
char		ft_next();
int			ft_op_minor();
int			ft_op_major();
int			ft_verificare();
int			ft_atoi();
#endif
