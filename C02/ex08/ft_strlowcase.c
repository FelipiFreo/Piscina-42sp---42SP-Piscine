/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: felforbe <felforbe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/28 02:19:05 by felforbe          #+#    #+#             */
/*   Updated: 2026/01/28 02:26:26 by felforbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	i;
	int	is_upcase;

	i = 0;
	while (str[i])
	{
		is_upcase = (str[i] >= 'A' && str[i] <= 'Z');
		if (is_upcase)
			str[i] += 32;
		i++;
	}
	return (str);
}
