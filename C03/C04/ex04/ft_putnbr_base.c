/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: felforbe <felforbe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/02 22:53:32 by felforbe          #+#    #+#             */
/*   Updated: 2026/02/02 23:12:15 by felforbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	prohibited_char_in_the_base(char *base)
{
	while (*base)
	{
		if (*base == '-' || *base == '+')
			return (1);
		base++;
	}
	return (0);
}

int	repeated_char_in_the_base(char *base)
{
	char	*base_pointer;

	while (*base)
	{
		base_pointer = base + 1;
		while (*base_pointer)
		{
			if (*base_pointer == *base)
				return (1);
			base_pointer++;
		}
		base++;
	}
	return (0);
}

int	is_base_error(char *base)
{
	if (base == NULL || base[0] == '\0' || base[1] == '\0')
		return (1);
	if (prohibited_char_in_the_base(base))
		return (1);
	if (repeated_char_in_the_base(base))
		return (1);
	return (0);
}

int	base_length(char *base)
{
	int	base_len;

	base_len = 0;
	while (*base)
	{
		base_len++;
		base++;
	}
	return (base_len);
}

void	ft_putnbr_base(int nbr, char *base)
{
	long	digit;
	long	base_len;

	digit = nbr;
	base_len = base_length(base);
	if (is_base_error(base))
		return ;
	if (digit < 0)
	{
		digit = -digit;
		write(1, "-", 1);
	}
	if (digit / base_len > 0)
	{
		ft_putnbr_base(digit / base_len, base);
	}
	write(1, &base[(digit % base_len)], 1);
}

// #include <stdio.h>
// int	main (void)
// {
// 		// Bases geradas:
//     char *test_base_binary = "01";
//     char *test_base_octal = "01234567";
//     char *test_base_decimal = "0123456789";
//     char *test_base_hexadecimal = "0123456789ABCDEF";

//     // Números a serem testados
//     int numeros_testados[] = {14, 42, 255, -100, 7};
//     int tamanho_da_amostra =  
// 	   sizeof(numeros_testados) / sizeof(numeros_testados[0]);

//     // Exibindo as bases geradas
//     printf("\nBASES GERADAS:\n");
//     printf("Binária     - \"%s\"\n", test_base_binary);
//     printf("Octal       - \"%s\"\n", test_base_octal);
//     printf("Decimal     - \"%s\"\n", test_base_decimal);
//     printf("Hexadecimal - \"%s\"\n", test_base_hexadecimal);

//     printf("\n\n");

//     // Loop para testar cada número
//     for (int i = 0; i < tamanho_da_amostra; i++) {
//         int num = numeros_testados[i];
//         printf("Número decimal testado: %d\n", num);

//         printf("Binária (2)     : ");
//         fflush(stdout);
//         ft_putnbr_base(num, test_base_binary);
//         printf("\n");

//         printf("Octal (8)       : ");
//         fflush(stdout);
//         ft_putnbr_base(num, test_base_octal);
//         printf("\n");

//         printf("Decimal (10)    : ");
//         fflush(stdout);
//         ft_putnbr_base(num, test_base_decimal);
//         printf("\n");

//         printf("Hexadecimal (16): ");
//         fflush(stdout);
//         ft_putnbr_base(num, test_base_hexadecimal);
//         printf("\n");

//         printf("\n");
//     }

// 	return (0);
// }