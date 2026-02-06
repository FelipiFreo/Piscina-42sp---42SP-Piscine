/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: felforbe <felforbe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/05 22:23:38 by felforbe          #+#    #+#             */
/*   Updated: 2026/02/05 22:39:02 by felforbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	char_position;

	i = 1;
	if (argc == 1)
		return (0);
	while (i < argc)
	{
		char_position = 0;
		while (argv[i][char_position] != '\0')
		{
			write (1, &argv[i][char_position], 1);
			char_position++;
		}
		i++;
		write (1, "\n", 1);
	}
	return (0);
}
