/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: felforbe <felforbe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/28 01:36:43 by felforbe          #+#    #+#             */
/*   Updated: 2026/01/28 01:53:01 by felforbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	i;
	int	number_flag;
	int	is_numeric;

	i = 0;
	number_flag = 1;
	while (str[i])
	{
		is_numeric = (str[i] >= 0 + '0' && str[i] <= 9 + '0');
		if (!is_numeric)
			number_flag = 0;
		i++;
	}
	return (number_flag);
}
