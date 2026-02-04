/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: felforbe <felforbe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 21:26:51 by felforbe          #+#    #+#             */
/*   Updated: 2026/01/28 01:04:30 by felforbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	long	long_nb;

	long_nb = nb;
	if (long_nb < 0)
	{
		ft_putchar('-');
		long_nb = -long_nb;
	}
	if (long_nb > 9)
	{
		ft_putnbr(long_nb / 10);
		ft_putnbr(long_nb % 10);
	}
	else
		ft_putchar(long_nb + '0');
}

// int	main(void)
// {
// 	ft_putnbr(0);
// 	ft_putchar('\n');
// 	ft_putnbr(-2147483648);
// 	ft_putchar('\n');
// 	ft_putnbr(2147483647);
// 	ft_putchar('\n');
// 	ft_putnbr(42);
// 	ft_putchar('\n');
// 	ft_putnbr(-42);
// 	ft_putchar('\n');
// 	return (0);
// }
