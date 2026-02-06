/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: felforbe <felforbe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/18 14:37:29 by sajorge-          #+#    #+#             */
/*   Updated: 2026/01/18 21:26:45 by felforbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	escreve_a(int y, int xcoluna, int ylinha)
{
	if ((xcoluna == 1) && (ylinha == 1 || ylinha == y))
	{
		ft_putchar('A');
	}
}

void	escreve_b_xcoluna(int x, int y, int xcoluna, int ylinha)
{
	if (xcoluna > 1 && xcoluna < x && (ylinha == 1 || ylinha == y))
	{
		ft_putchar('B');
	}
}

void	escreve_b_ylinha(int x, int y, int xcoluna, int ylinha)
{
	if ((xcoluna == 1 || xcoluna == x) && (ylinha > 1 && ylinha < y))
	{
		ft_putchar('B');
	}
}

void	escreve_c(int x, int y, int xcoluna, int ylinha)
{
	if ((xcoluna == x && xcoluna > 1) && (ylinha == 1 || ylinha == y))
	{
		ft_putchar('C');
	}
}

void	rush(int x, int y)
{
	int	xcoluna;
	int	ylinha;

	xcoluna = 1;
	ylinha = 1;
	while (xcoluna <= x && ylinha <= y)
	{
		if (ylinha > 1 && ylinha < y && xcoluna > 1 && xcoluna < x)
		{
			ft_putchar(' ');
		}
		escreve_a(y, xcoluna, ylinha);
		escreve_b_ylinha(x, y, xcoluna, ylinha);
		escreve_b_xcoluna(x, y, xcoluna, ylinha);
		escreve_c(x, y, xcoluna, ylinha);
		xcoluna++;
		if (xcoluna > x)
		{
			xcoluna = 1;
			ylinha++;
			ft_putchar('\n');
		}
	}
}
