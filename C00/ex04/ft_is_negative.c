/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: felforbe <felforbe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/14 20:50:24 by felforbe          #+#    #+#             */
/*   Updated: 2026/01/28 01:04:26 by felforbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_is_negative(int n)
{
	char	flag;

	flag = 'P';
	if (n < 0)
	{
		flag = 'N';
	}
	ft_putchar(flag);
}

// int main (void)
// {
//	 ft_is_negative(1);
//	 ft_is_negative(0);
//	 ft_is_negative(-1);
//	 return (0);
// }