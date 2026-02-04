/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: felforbe <felforbe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/28 02:08:52 by felforbe          #+#    #+#             */
/*   Updated: 2026/01/28 02:14:37 by felforbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	i;
	int	is_printable_flag;
	int	is_printable;

	i = 0;
	is_printable_flag = 1;
	while (str[i])
	{
		is_printable = (str[i] >= ' ' && str[i] <= '~');
		if (!is_printable)
			is_printable_flag = 0;
		i++;
	}
	return (is_printable_flag);
}
