/* ************************************************************************** */
/*		                                                                    */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: felforbe <felforbe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/18 18:38:06 by felforbe          #+#    #+#             */
/*   Updated: 2026/01/18 18:58:43 by felforbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_print_line(int coluna, char start, char mid, char end)
{
	int	i;

	i = 1;
	while (i <= coluna)
	{
		if (i == 1)
			ft_putchar(start);
		else if (i == coluna)
			ft_putchar(end);
		else
			ft_putchar(mid);
		i++;
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int	i;

	i = 1;
	if (x <= 0 || y <= 0)
		return ;
	while (i <= y)
	{
		if (i == 1)
			ft_print_line(x, 'A', 'B', 'C');
		else if (i == y)
			ft_print_line(x, 'C', 'B', 'A');
		else
			ft_print_line(x, 'B', ' ', 'B');
		i++;
	}
}
