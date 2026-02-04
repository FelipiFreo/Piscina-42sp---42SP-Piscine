/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: felforbe <felforbe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 22:16:39 by felforbe          #+#    #+#             */
/*   Updated: 2026/01/28 01:04:33 by felforbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	put_comma(void)
{
	ft_putchar(',');
	ft_putchar(' ');
}

void	print_tab(int *tab, int n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		ft_putchar(tab[i] + '0');
		i++;
	}
}

void	tabimetro(int *tab, int n)
{
	int	i;
	int	j;

	if (n == 0)
		return ;
	i = n - 1;
	tab[i]++;
	while (i > 0 && tab[i] > 9)
	{
		tab[i] = 0;
		i--;
		tab[i]++;
	}
	if (tab[0] > 9)
		return ;
	j = i + 1;
	while (j < n)
	{
		tab[j] = tab[j - 1] + 1;
		j++;
	}
	if (tab[n - 1] > 9)
		tabimetro(tab, n);
}

void	ft_print_combn(int n)
{
	int	tab[9];
	int	first_comb;
	int	i;

	first_comb = 1;
	i = 0;
	if (n <= 0 || n > 9)
		return ;
	while (i < n)
	{
		tab[i] = i;
		i++;
	}
	while (tab[0] <= (10 - n))
	{
		if (first_comb == 0)
		{
			put_comma();
		}
		first_comb = 0;
		print_tab(tab, n);
		tabimetro(tab, n);
	}
}

// int	main(void)
// {
// 	int	n;

// 	n = 0;

// 	// ft_putchar(n + '0');
// 	// ft_print_combn(n);
// 	// ft_putchar('\n');

// 	while (n <= 5)
// 	{
// 		ft_putchar(n);
// 		ft_putchar('\n');
// 		ft_print_combn(n);
// 		ft_putchar('\n');
// 		n++;
// 	}

// 	return (0);
// }
