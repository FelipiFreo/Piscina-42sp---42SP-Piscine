/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: felforbe <felforbe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/14 21:34:17 by felforbe          #+#    #+#             */
/*   Updated: 2026/01/28 01:04:23 by felforbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putcomb(int c, int d, int u)
{
	ft_putchar(c + '0');
	ft_putchar(d + '0');
	ft_putchar(u + '0');
}

void	ft_putcomma(int *first_comb)
{
	if (*first_comb == 0)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
	*first_comb = 0;
}

void	odometro(int *centenas, int *dezenas, int *unidades)
{
	(*unidades)++;
	if (*unidades > 9)
	{
		*unidades = 0;
		(*dezenas)++;
		if (*dezenas > 9)
		{
			*dezenas = 0;
			(*centenas)++;
		}
	}
}

void	ft_print_comb(void)
{
	int		c;
	int		d;
	int		u;
	int		first_comb;

	u = 0;
	d = 0;
	c = 0;
	first_comb = 1;
	while (c <= 9)
	{
		if (u > d && d > c)
		{
			ft_putcomma(&first_comb);
			ft_putcomb(c, d, u);
		}
		odometro(&c, &d, &u);
	}
}

// int	main(void)
// {
// 	ft_print_comb();
// 	return (0);
// }