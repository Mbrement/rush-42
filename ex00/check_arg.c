/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_arg.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lebensim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 23:16:43 by lebensim          #+#    #+#             */
/*   Updated: 2022/07/17 23:18:00 by lebensim         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	ft_check_left(int tab[4][4], int arg[4][4], int x, int y)
{
	int	i;
	int	a;

	i = 0;
	a = 0;
	while (i <= x)
	{
		if (tab[y][i] < tab[y][x])
			a++;
		i++;
	}
	if (a <= arg[2][y])
		return (0);
	else
		return (1);
}

int	ft_check_right(int tab[4][4], int arg[4][4], int x, int y)
{
	int	i;
	int	a;

	a = 0;
	i = 3;
	while (i >= x)
	{
		if (tab[y][i] < tab[y][x])
			a++;
		i--;
	}
	if (a <= arg[3][y])
		return (0);
	else
		return (1);
}

int	ft_check_top(int tab[4][4], int arg[4][4], int x, int y)
{
	int	i;
	int	a;

	i = 0;
	a = 0;
	while (i <= y)
	{
		if (tab[i][x] < tab[y][x])
			a++;
		i++;
	}
	if (a <= arg[0][y])
		return (0);
	else
		return (1);
}

int	ft_check_down(int tab[4][4], int arg[4][4], int x, int y)
{
	int	i;
	int	a;

	i = 3;
	a = 0;
	while (i >= y)
	{
		if (tab[i][x] < tab[y][x])
			a++;
		i--;
	}
	if (a <= arg[1][y])
		return (0);
	else
		return (1);
}

int	ft_arg_check(int tab[4][4], int arg[4][4], int x, int y)
{
	int	result;

	result = ft_check_top(tab, arg, x, y);
	if (result == 1)
		return (2);
	result = ft_check_down(tab, arg, x, y);
	if (result == 1)
		return (2);
	result = ft_check_left(tab, arg, x, y);
	if (result == 2)
		return (1);
	result = ft_check_right(tab, arg, x, y);
	if (result == 2)
		return (1);
	return (0);
}
