/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: felforbe <felforbe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/17 20:14:53 by sajorge-          #+#    #+#             */
/*   Updated: 2026/01/18 21:11:05 by felforbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	rush(int x, int y);

void	ft_putchar(char c);

int	main(void)
{
	rush(5, 5);
	ft_putchar ('\n');
	rush(1, 1);
	ft_putchar ('\n');
	rush(2, 2);
	ft_putchar ('\n');
	rush(1, 5);
	ft_putchar ('\n');
	rush(5, 1);
	ft_putchar ('\n');
	rush(5, 3);
	ft_putchar ('\n');
	rush(3, 5);
	ft_putchar ('\n');
	return (0);
}
