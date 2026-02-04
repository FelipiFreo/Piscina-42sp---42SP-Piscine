/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: felforbe <felforbe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/28 02:14:55 by felforbe          #+#    #+#             */
/*   Updated: 2026/01/28 02:18:50 by felforbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int	i;
	int	is_lowercase;

	i = 0;
	while (str[i])
	{
		is_lowercase = (str[i] >= 'a' && str[i] <= 'z');
		if (is_lowercase)
			str[i] -= 32;
		i++;
	}
	return (str);
}
