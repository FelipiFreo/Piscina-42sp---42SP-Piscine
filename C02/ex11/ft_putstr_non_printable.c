/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: felforbe <felforbe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/29 18:36:51 by felforbe          #+#    #+#             */
/*   Updated: 2026/01/29 21:01:47 by felforbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	is_printable(unsigned char c)
{
	return (c >= 32 && c <= 126);
}

void	print_hexadecimal_converted(unsigned char non_printable_char)
{
	const char	*hexadecimal_converter_array;

	hexadecimal_converter_array = "0123456789abcdef";
	ft_putchar('\\');
	ft_putchar(hexadecimal_converter_array[(non_printable_char / 16)]);
	ft_putchar(hexadecimal_converter_array[(non_printable_char % 16)]);
}

void	ft_putstr_non_printable(char *str)
{
	unsigned char	current_char;

	while (*str)
	{
		current_char = (unsigned char) *str;
		if (is_printable(current_char))
			ft_putchar(*str);
		else
			print_hexadecimal_converted(current_char);
		str++;
	}
}
