/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_tab.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lebensim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 23:15:19 by lebensim          #+#    #+#             */
/*   Updated: 2022/07/17 23:20:02 by lebensim         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_tab(int size, int tab[size][size])
{
	int	i;
	int	j;
	int	a;

	i = 0;
	while (i < size)
	{
		j = 0;
		while (j < size)
		{
			a = tab[i][j] + '0';
			write(1, &a, 1);
			if (j + 1 < size)
				write(1, " ", 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}
