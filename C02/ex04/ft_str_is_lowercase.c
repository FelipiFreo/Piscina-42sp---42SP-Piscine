/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: felforbe <felforbe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/28 01:53:32 by felforbe          #+#    #+#             */
/*   Updated: 2026/01/28 01:59:47 by felforbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	i;
	int	lowercase_flag;
	int	is_lowercase;

	i = 0;
	lowercase_flag = 1;
	while (str[i])
	{
		is_lowercase = (str[i] >= 'a' && str[i] <= 'z');
		if (!is_lowercase)
			lowercase_flag = 0;
		i++;
	}
	return (lowercase_flag);
}
