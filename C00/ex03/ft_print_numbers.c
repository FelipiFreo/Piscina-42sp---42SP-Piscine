/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: felforbe <felforbe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/14 19:05:11 by felforbe          #+#    #+#             */
/*   Updated: 2026/01/28 01:04:21 by felforbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_numbers(void)
{
	int	digito;

	digito = 0;
	while (digito <= 9)
	{
		ft_putchar(digito + '0');
		digito++;
	}
}

// int main(void)
// {
//     ft_print_numbers();
//     return (0);
// }