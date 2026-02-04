/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: felforbe <felforbe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/27 23:38:59 by felforbe          #+#    #+#             */
/*   Updated: 2026/01/28 01:51:49 by felforbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <unistd.h>

int	ft_str_is_alpha(char *str)
{
	int	i;
	int	alpha_flag;
	int	is_lowercase;
	int	is_uppercase;

	i = 0;
	alpha_flag = 1;
	while (str[i])
	{
		is_lowercase = (str[i] >= 'a' && str[i] <= 'z');
		is_uppercase = (str[i] >= 'A' && str[i] <= 'Z');
		if (!(is_lowercase || is_uppercase))
			alpha_flag = 0;
		i++;
	}
	return (alpha_flag);
}
