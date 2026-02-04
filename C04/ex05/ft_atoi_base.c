/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: felforbe <felforbe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/02 23:19:27 by felforbe          #+#    #+#             */
/*   Updated: 2026/02/03 00:33:42 by felforbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	is_base_error(char *base)
{
	int		i;
	char	*ptr;

	if (base == NULL || base[0] == '\0' || base[1] == '\0')
		return (1);
	i = 0;
	while (base[i])
	{
		if (base[i] == '-' || base[i] == '+')
			return (1);
		if (base[i] == ' ' || (base[i] >= 9 && base[i] <= 13))
			return (1);
		ptr = base + i + 1;
		while (*ptr)
		{
			if (*ptr == base[i])
				return (1);
			ptr++;
		}
		i++;
	}
	return (0);
}

int	base_length(char *base)
{
	int	base_len;

	base_len = 0;
	while (*base)
	{
		base_len++;
		base++;
	}
	return (base_len);
}

int	get_position_in_base(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (base[i] == c)
			return (i);
		i++;
	}
	return (-1);
}

int	is_number_signal_negative(char *str, int *i)
{
	int	signal_flag;

	signal_flag = 1;
	while (str[*i] == ' ' || (str[*i] >= 9 && str[*i] <= 13))
		(*i)++;
	while (str[*i] == '-' || str[*i] == '+')
	{
		if (str[*i] == '-')
			signal_flag = -signal_flag;
		(*i)++;
	}
	return (signal_flag);
}

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	number;
	int	signal_flag;
	int	position;
	int	base_len;

	i = 0;
	number = 0;
	signal_flag = is_number_signal_negative(str, &i);
	base_len = base_length(base);
	if (is_base_error(base))
		return (0);
	while (str[i])
	{
		position = get_position_in_base(str[i], base);
		if (position == -1)
			break ;
		number = number * base_len + position;
		i++;
	}
	return (signal_flag * number);
}
