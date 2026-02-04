/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: felforbe <felforbe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/28 02:26:43 by felforbe          #+#    #+#             */
/*   Updated: 2026/01/29 16:35:12 by felforbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_alphanumeric(char *str)
{
	if (*str >= 'a' && *str <= 'z')
		return (1);
	if (*str >= 'A' && *str <= 'Z')
		return (1);
	if (*str >= '0' && *str <= '9')
		return (1);
	return (0);
}

void	upcase_a_letter(char *str)
{
	if (*str >= 'a' && *str <= 'z')
		*str = *str - 32;
}

void	lowcase_a_letter(char *str)
{
	if (*str >= 'A' && *str <= 'Z')
		*str = *str + 32;
}

char	*ft_strcapitalize(char *str)
{
	char	*first_str_position;

	first_str_position = str;
	upcase_a_letter(str);
	while (*str)
	{
		if (!is_alphanumeric(str))
		{
			str++;
			upcase_a_letter(str);
		}
		if (is_alphanumeric(str))
		{
			str++;
			lowcase_a_letter(str);
		}
	}
	str = first_str_position;
	return (str);
}
