/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlima <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/13 23:41:42 by rlima             #+#    #+#             */
/*   Updated: 2018/11/14 21:06:04 by rlima            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	solve(char *str1, char *str2)
{
	int		i;
	int		vf[128];

	i = 0;
	while (i < 128)
		vf[i++] = 0;
	i = 0;
	while(str2[i])
	{
		if (vf[(int)str2[i]] == 0)
			vf[(int)str2[i]] = 1;
		i++;
	}
	i = 0;
	while (str1[i])
	{
		if (vf[(int)str1[i]] == 1)
			vf[(int)str1[i]] = 2;
		i++;
	}
	i = 0;
	while (str1[i])
	{
		if(vf[(int)str1[i]] == 2)
		{
			vf[(int)str1[i]] = 0;	
			write(1, &str1[i], 1);
		}
		i++;
	}
}

int main(int argc, char *argv[])
{
	if (argc == 3)
		solve(argv[1], argv[2]);
	write(1, "\n", 1);
	return (0);
}
