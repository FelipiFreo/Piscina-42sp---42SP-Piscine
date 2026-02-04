/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: felforbe <felforbe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/25 20:33:39 by felforbe          #+#    #+#             */
/*   Updated: 2026/01/28 01:05:29 by felforbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <unistd.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	bubbler;
	int	i;
	int	last_position;

	last_position = size - 1;
	while (last_position > 0)
	{
		i = 0;
		while (i < last_position)
		{
			if (tab[i] > tab[i + 1])
			{
				bubbler = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = bubbler;
			}
			i++;
		}
		last_position--;
	}
}
