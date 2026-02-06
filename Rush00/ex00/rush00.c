/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: felforbe <felforbe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/18 14:37:29 by sajorge-          #+#    #+#             */
/*   Updated: 2026/01/18 21:14:43 by felforbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	escreve_o(int x, int y, int xcoluna, int ylinha)
{
	if ((xcoluna == 1 || xcoluna == x) && (ylinha == 1 || ylinha == y))
	{
		ft_putchar('o');
	}
}

void	escreve_traco(int x, int y, int xcoluna, int ylinha)
{
	if (xcoluna > 1 && xcoluna < x && (ylinha == 1 || ylinha == y))
	{
		ft_putchar('-');
	}
}

void	escreve_barra(int x, int y, int xcoluna, int ylinha)
{
	if ((xcoluna == 1 || xcoluna == x) && (ylinha > 1 && ylinha < y))
	{
		ft_putchar('|');
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
		escreve_o(x, y, xcoluna, ylinha);
		escreve_traco(x, y, xcoluna, ylinha);
		escreve_barra(x, y, xcoluna, ylinha);
		xcoluna++;
		if (xcoluna > x)
		{
			xcoluna = 1;
			ft_putchar('\n');
			ylinha++;
		}
	}
}
