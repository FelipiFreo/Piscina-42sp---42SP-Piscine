/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: felforbe <felforbe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/02 22:11:44 by felforbe          #+#    #+#             */
/*   Updated: 2026/02/02 22:24:23 by felforbe         ###   ########.fr       */
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
	}
	ft_putchar(long_nb % 10 + '0');
}
