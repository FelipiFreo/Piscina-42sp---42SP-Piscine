/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: felforbe <felforbe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/28 02:00:06 by felforbe          #+#    #+#             */
/*   Updated: 2026/01/28 02:06:35 by felforbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	i;
	int	uppercase_flag;
	int	is_uppercase;

	i = 0;
	uppercase_flag = 1;
	while (str[i])
	{
		is_uppercase = (str[i] >= 'A' && str[i] <= 'Z');
		if (!is_uppercase)
			uppercase_flag = 0;
		i++;
	}
	return (uppercase_flag);
}
