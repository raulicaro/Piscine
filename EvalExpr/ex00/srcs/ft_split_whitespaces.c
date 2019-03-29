/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlima <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/01 14:25:20 by rlima             #+#    #+#             */
/*   Updated: 2018/11/10 21:48:16 by rlima            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "../includes/ft_evalexpr.h"

int		ft_strlen(void)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (g_str[i])
	{
		if (g_str[i] != ' ')
			j++;
		i++;
	}
	return (i);
}

char	ft_gets(void)
{
	return (*g_str);
}

char	ft_next(void)
{
	return (*g_str++);
}

char	*ft_split_whitespaces(void)
{
	int		i;
	char	*s;
	int		j;

	i = 0;
	j = 0;
	s = (char *)malloc(sizeof(char) * (ft_strlen() + 1));
	while (g_str[i])
	{
		if (g_str[i] != ' ' && g_str[i] != '\t')
		{
			s[j] = g_str[i];
			j++;
		}
		i++;
	}
	s[i] = '\0';
	return (s);
}
