/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: felforbe <felforbe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/01 17:34:39 by felforbe          #+#    #+#             */
/*   Updated: 2026/02/02 20:24:55 by felforbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i_haystack;
	int	i_needle;
	int	haystack_start;

	if (to_find[0] == '\0')
		return (str);
	i_haystack = 0;
	i_needle = 0;
	while (str[i_haystack])
	{
		haystack_start = i_haystack;
		while (str[i_haystack] == to_find[i_needle])
		{
			i_haystack++;
			i_needle++;
			if (to_find[i_needle] == '\0')
				return (&str[i_haystack - i_needle]);
		}
		i_needle = 0;
		i_haystack = haystack_start + 1;
	}
	return (0);
}
