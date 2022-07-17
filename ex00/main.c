/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lebensim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 22:58:19 by lebensim          #+#    #+#             */
/*   Updated: 2022/07/17 23:19:44 by lebensim         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_tab(int size, int tab[size][size]);

void	ft_algo(int size, int tab[size][size]);

void	ft_up(int size, int tab[size][size], int arg[size][size]);

void	ft_right(int size, int tab[size][size], int arg[size][size]);

void	ft_left(int size, int tab[size][size], int arg[size][size]);

void	ft_down(int size, int tab[size][size], int arg[size][size]);

int		count_check(int argc, char **argv);

int	main(int argc, char **argv)
{
	int	size;
	int	tab[4][4] = {{0, 0, 0, 0}, {0, 0, 0, 0}, {0, 0, 0, 0}, {0, 0, 0, 0}};
	int	arg[4][4] = {{4, 3, 2, 1}, {1, 2, 2, 2}, {4, 3, 2, 1}, {1, 2, 2, 2}};

	if (count_check(argc, argv) == 0)
	{
		write(1, "error", 5);
		return (0);
	}
	size = count_check(argc, argv);
	ft_up(4, tab, arg);
	ft_right(size, tab, arg);
	ft_left(size, tab, arg);
	ft_down(size, tab, arg);
	ft_algo(size, tab);
	ft_print_tab(size, tab);
	return (0);
}
