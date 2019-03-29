/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlima <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/27 20:56:43 by rlima             #+#    #+#             */
/*   Updated: 2018/10/27 22:38:23 by rlima            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}	

void	ft_print_rush(int row, int col, int width, int length)
{
	if (col == 1 && (row == 1 || row == length))
		ft_putchar('A');
	else if (col == 1)
		ft_putchar('B');
	else if (col ==  width && (row == 1 || row == length))
		ft_putchar('C');
	else if (col == width)
		ft_putchar('B');
	else if (row == 1 || row == length)
		ft_putchar('B');
	else
		ft_putchar(' ');
}

int main(void)
{
	ft_print_rush(1,1,1,5);
	ft_print_rush(2,1,1,5);
	ft_print_rush(3,1,1,5);
	ft_print_rush(4,1,1,5);
	ft_print_rush(5,1,1,5);
	ft_putchar('\n');
	return (0);
}
