/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: felforbe <felforbe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/29 20:11:16 by felforbe          #+#    #+#             */
/*   Updated: 2026/02/02 21:50:54 by felforbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_hex_collumns(unsigned char *ptr, unsigned int len)
{
	const char		*hex;
	unsigned int	i;

	hex = "0123456789abcdef";
	i = 0;
	while (i < 16)
	{
		if (i < len)
		{
			ft_putchar(hex[ptr[i] / 16]);
			ft_putchar(hex[ptr[i] % 16]);
		}
		else
		{
			ft_putchar(' ');
			ft_putchar(' ');
		}
		if (i % 2 == 1)
			ft_putchar(' ');
		i++;
	}
}

void	print_address(unsigned long addr)
{
	const char		*hex;
	int				i;
	unsigned long	temp;
	char			buffer[16];

	hex = "0123456789abcdef";
	temp = addr;
	i = 15;
	while (i >= 0)
	{
		buffer[i] = hex[temp % 16];
		temp = temp / 16;
		i--;
	}
	i = 0;
	while (i < 16)
	{
		ft_putchar(buffer[i]);
		i++;
	}
}

void	print_char_or_dot(unsigned char *ptr, unsigned int length)
{
	unsigned int	i;

	i = 0;
	while (i < length)
	{
		if (ptr[i] >= 32 && ptr[i] <= 126)
			ft_putchar(ptr[i]);
		else
			ft_putchar('.');
		i++;
	}
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	unsigned char	*ptr;
	unsigned int	i;
	unsigned int	bytes_to_print;

	if (size == 0)
		return (addr);
	ptr = (unsigned char *)addr;
	i = 0;
	while (i < size)
	{
		if (size - i >= 16)
			bytes_to_print = 16;
		else
			bytes_to_print = size - i;
		print_address((unsigned long)(ptr + i));
		ft_putchar(':');
		ft_putchar(' ');
		print_hex_collumns(ptr + i, bytes_to_print);
		ft_putchar(' ');
		print_char_or_dot(ptr + i, bytes_to_print);
		ft_putchar('\n');
		i += 16;
	}
	return (addr);
}
