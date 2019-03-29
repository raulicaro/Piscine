/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlima <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/13 17:04:00 by rlima             #+#    #+#             */
/*   Updated: 2018/11/14 14:15:30 by rlima            ###   ########.fr       */
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
	int			i;
	int			current;
	int			check;
	char		tmp[ft_strlen(argv[1]) + ft_strlen(argv[2])];

	i = 0;
	check = 0;
	current = 0;
	if (argc == 3)
	{
		while (argv[1][i])
		{
			check = 0;
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
			i++;
		}
		i = 0;
		while (argv[2][i])
		{
			check = 0;
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
			i++;
		}
	}
	ft_putchar('\n');
	return (0);
}
