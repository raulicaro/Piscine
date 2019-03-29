/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlima <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/14 14:17:46 by rlima             #+#    #+#             */
/*   Updated: 2018/11/14 16:06:10 by rlima            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_strlen(char *str)
{
	int		i;

	i = 0;
	if (!str || !*str)
		return (0);
	while(str[i])
		i++;
	return (i);
}

int		main(int argc, char *argv[])
{
	int		i;
	int		check;
	int		current;
	int		tmp[ft_strlen(argv[1]) + ft_strlen(argv[2])];

	i = 0;
	current = 0;
	check = 0;
	if (argc == 3)
	{
		while (argv[1][i])
		{
			while (check != current)
			{
				if (tmp[check] == argv[1][i])
					break;
				check++;
			}
			if (check == current)
			{
				ft_putchar(argv[1][i]);
				tmp[current] = argv[1][i];
				current++;
			}
			check = 0;
			i++;
		}
		i = 0;
		while (argv[2][i])
		{
			while (check != current)
			{
				if (tmp[check] == argv[2][i])
					break;
				check++;
			}
			if (check == current)
			{
				ft_putchar(argv[2][i]);
				tmp[current] = argv[2][i];
				current++;
			}
			check = 0;
			i++;
		}
	}
	ft_putchar('\n');
	return (0);
}
