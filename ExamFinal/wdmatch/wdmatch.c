/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wdmatch.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlima <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/14 14:50:45 by rlima             #+#    #+#             */
/*   Updated: 2018/11/14 16:40:09 by rlima            ###   ########.fr       */
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

void	wdmatch(char *s1, char *s2)
{
	int		i;
	int		j;
	int		len;

	i = 0;
	j = 0;
	len = ft_strlen(s1);
	while (s2[j] && i < len)
		(s2[j++] == s1[i] ? ++i : 0);
	if (i == len)
		write(1, s1, len);
}

int		main(int ac, char *av[])
{
	if (ac == 3)
	{
		wdmatch(av[1], av[2]);
	}
	ft_putchar('\n');
	return (0);
}
