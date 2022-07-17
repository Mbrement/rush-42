/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   updownleftright.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lebensim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 23:08:12 by lebensim          #+#    #+#             */
/*   Updated: 2022/07/17 23:08:43 by lebensim         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

void	ft_down(int size, int tab[size][size], int arg[size][size])
{
	int	y;
	int	x;
	int	a;

	a = size - 1;
	y = 1;
	x = 0;
	while (x < size)
	{
		if (arg[1][x] == size)
		{
			while (a != -1)
			{
				tab[a][x] = y;
				y++;
				a--;
			}
		}
		if (arg[1][x] == 1)
			tab[size - 1][x] = size;
		a = size - 1;
		y = 1;
		x++;
	}
}

void	ft_left(int size, int tab[size][size], int arg[size][size])
{
	int	y;
	int	x;
	int	argx;

	argx = 0;
	y = 0;
	x = 0;
	while (y <= size - 1)
	{
		if (arg[2][argx] == size)
		{
			while (x < size)
			{
				tab[y][x] = x + 1;
				x++;
			}
			x = 0;
		}
		if (arg[2][argx] == 1)
			tab[y][x] = size;
		y++;
		argx++;
	}
}

void	ft_right(int size, int tab[size][size], int arg[size][size])
{
	int	y;
	int	x;
	int	argx;

	argx = 0;
	y = 0;
	x = 0;
	while (y <= size - 1)
	{
		if (arg[3][argx] == size)
		{
			while (x < size)
			{
				tab[y][size - x - 1] = x + 1;
				x++;
			}
			x = 0;
		}
		if (arg[3][argx] == 1)
			tab[y][size - 1 - x] = size;
		y++;
		argx++;
	}
}

void	ft_up(int size, int tab[size][size], int arg[size][size])
{
	int	y;
	int	x;

	y = 0;
	x = 0;
	while (y < 1)
	{
		if (arg[y][x] == size)
		{
			while (y < size)
			{
				tab[y][x] = y + 1;
				y++;
			}
			y = 0;
		}
		if (arg[y][x] == 1)
			tab[y][x] = size;
		x++;
		if (x > size - 1)
			y++;
	}
}
