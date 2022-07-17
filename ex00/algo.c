/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lebensim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 23:11:46 by lebensim          #+#    #+#             */
/*   Updated: 2022/07/17 23:14:53 by lebensim         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	ft_check_xy(int size, int y, int x, int tab[size][size])
{
	int	i;

	i = 0;
	if (tab[y][x] == 0)
		return (0);
	while (i < size)
	{
		if (tab[y][x] == tab[y][i] && i != x)
			return (0);
		i++;
	}
	i = 0;
	while (i < size)
	{
		if (tab[y][x] == tab[i][x] && i != y)
			return (0);
		i++;
	}
	return (1);
}

void	ft_algo(int size, int tab[size][size])
{
	int	x;
	int	y;
	int	value;
	int	back;

	x = 0;
	y = 0;
	value = 1;
	back = 0;
	while (y < size)
	{
		if (ft_check_xy(size, y, x, tab) == 1)
		{
			x++;
			value = 1;
		}
		else
		{
			while (ft_check_xy(size, y, x, tab) == 0 && back != 1)
			{
				tab[y][x] = value;
				value++;
				if (value >= size + 1)
					back++;
			}
		}
		if (back != 0)
		{
			x--;
			value = 1;
			tab[y][x]++;
			back--;
		}
		if (x >= size)
		{
			y++;
			x = 0;
		}
	}
}
