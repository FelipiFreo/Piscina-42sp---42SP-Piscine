/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: felforbe <felforbe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/25 20:25:31 by felforbe          #+#    #+#             */
/*   Updated: 2026/01/28 01:05:20 by felforbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	swapper;
	int	i;
	int	j;

	i = 0;
	j = size -1;
	while (i < j)
	{
		swapper = tab[i];
		tab[i] = tab[j];
		tab[j] = swapper;
		i++;
		j--;
	}
}
