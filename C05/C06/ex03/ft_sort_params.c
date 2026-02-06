/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: felforbe <felforbe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/05 22:41:09 by felforbe          #+#    #+#             */
/*   Updated: 2026/02/05 23:34:04 by felforbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *argv)
{
	int	str_lenght;

	str_lenght = 0;
	while (*argv)
	{
		str_lenght++;
		argv++;
	}
	return (str_lenght);
}

int	ft_strcomp(char *str1, char *str2)
{
	int	resultado;

	resultado = 0;
	while (*str1 != '\0' && *str2 != '\0')
	{
		if (*str1 != *str2)
		{
			resultado = (*str1 - *str2);
			return (resultado);
		}
		str1++;
		str2++;
	}
	return (*str1 - *str2);
}

void	argv_bubble_sort(char *argv[], int argv_array_lenght)
{
	char	*arg_switcher;
	int		i;
	int		j;

	i = 1;
	while (i < argv_array_lenght - 1)
	{
		j = i + 1;
		while (j < argv_array_lenght)
		{
			if (ft_strcomp(argv[i], argv[j]) > 0)
			{
				arg_switcher = argv[i];
				argv[i] = argv[j];
				argv[j] = arg_switcher;
			}
			j++;
		}
		i++;
	}
}

int	main(int argc, char *argv[])
{
	int	argv_lenght;
	int	argv_iterator;
	int	word_iterator;

	argv_lenght = argc;
	argv_bubble_sort(argv, argv_lenght);
	argv_iterator = 1;
	while (argv_iterator < argc)
	{
		word_iterator = 0;
		while (argv[argv_iterator][word_iterator])
		{
			ft_putchar(argv[argv_iterator][word_iterator]);
			word_iterator++;
		}
		write(1, "\n", 1);
		argv_iterator++;
	}
	return (0);
}
