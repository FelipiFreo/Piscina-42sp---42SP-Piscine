/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: felforbe <felforbe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/17 20:14:53 by sajorge-          #+#    #+#             */
/*   Updated: 2026/01/18 18:39:38 by felforbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	escreve_a(int ix, int iy, int x)
{
	if ((ix == 1 || ix == x) && iy == 1)
	{
		ft_putchar('A');
	}
}

void	escreve_b_linha(int ix, int iy, int x, int y)
{
	if (ix > 1 && ix < x && (iy == 1 || iy == y))
	{
		ft_putchar('B');
	}
}

void	escreve_b_coluna(int ix, int iy, int x, int y)
{
	if ((ix == 1 || ix == x) && (iy > 1 && iy < y))
	{
		ft_putchar('B');
	}
}

void	escreve_c(int ix, int iy, int x, int y)
{
	if (iy == y && iy > 1 && (ix == 1 || ix == x))
	{
		ft_putchar('C');
	}
}

void	rush(int x, int y)
{
	int	ix;
	int	iy;

	ix = 1;
	iy = 1;
	while (ix <= x && iy <= y)
	{
		if (ix > 1 && ix < x && iy > 1 && iy < y)
		{
			ft_putchar(' ');
		}
		escreve_a(ix, iy, x);
		escreve_b_linha(ix, iy, x, y);
		escreve_b_coluna(ix, iy, x, y);
		escreve_c(ix, iy, x, y);
		ix++;
		if (ix > x)
		{
			ix = 1;
			ft_putchar('\n');
			iy++;
		}
	}
}
