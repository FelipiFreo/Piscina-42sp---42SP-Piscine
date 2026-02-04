/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: felforbe <felforbe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/18 15:02:17 by felforbe          #+#    #+#             */
/*   Updated: 2026/01/28 01:04:28 by felforbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_pair(int a, int b)
{
	ft_putchar(a / 10 + '0');
	ft_putchar(a % 10 + '0');
	ft_putchar(' ');
	ft_putchar(b / 10 + '0');
	ft_putchar(b % 10 + '0');
}

void	put_comma(void)
{
	ft_putchar(',');
	ft_putchar(' ');
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;
	int	first_comb;

	a = 0;
	b = 0;
	first_comb = 1;
	while (a <= 99)
	{
		b = a + 1;
		while (b <= 99)
		{
			if (first_comb == 0)
				put_comma();
			first_comb = 0;
			print_pair(a, b);
			b++;
		}
		a++;
	}
}

// int main(void)
// {
// 	ft_print_comb2();
// 	return (0);
// }