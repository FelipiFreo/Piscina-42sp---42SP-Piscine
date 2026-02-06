/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: felforbe <felforbe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/04 16:59:17 by felforbe          #+#    #+#             */
/*   Updated: 2026/02/04 20:47:19 by felforbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	g_neg_diag_list[10];
int	g_pos_diag_list[10];
int	g_y_taken_list[10];
int	g_queens_placed;
int	g_fully_peacefull_boards_count;

int	peacefull_spot(int column_x, int row_y)
{
	int	i;

	i = 0;
	while (i < g_queens_placed)
	{
		if (g_neg_diag_list[i] == (column_x - row_y))
			return (0);
		if (g_pos_diag_list[i] == (column_x + row_y))
			return (0);
		if (g_y_taken_list[i] == row_y)
			return (0);
		i++;
	}
	return (1);
}

void	print_board(void)
{
	int		i;
	char	c;

	i = 0;
	while (i < 10)
	{
		c = g_y_taken_list[i] + '0';
		write(1, &c, 1);
		i++;
	}
	write(1, "\n", 1);
	g_fully_peacefull_boards_count++;
}

void	solve(int column_x)
{
	int		row_y;

	if (column_x == 10)
	{
		print_board();
		return ;
	}
	row_y = 0;
	while (row_y < 10)
	{
		if (peacefull_spot(column_x, row_y) == 1)
		{
			g_neg_diag_list[g_queens_placed] = (column_x - row_y);
			g_pos_diag_list[g_queens_placed] = (column_x + row_y);
			g_y_taken_list[g_queens_placed] = row_y;
			g_queens_placed++;
			solve(column_x + 1);
			g_queens_placed--;
		}
		row_y++;
	}
}

int	ft_ten_queens_puzzle(void)
{
	g_queens_placed = 0;
	g_fully_peacefull_boards_count = 0;
	solve(0);
	return (g_fully_peacefull_boards_count);
}

// #include <stdio.h>
// int	main(void)
// {
// 	int	total;

// 	total = ft_ten_queens_puzzle();
// 	printf("Total: %d\n", total);  // só para debug
// 	return (0);
// }