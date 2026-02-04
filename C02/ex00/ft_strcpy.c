/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: felforbe <felforbe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/27 22:24:25 by felforbe          #+#    #+#             */
/*   Updated: 2026/01/28 01:36:36 by felforbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <unistd.h>
// #include <string.h>
// #include <stdio.h>

char	*ft_strcpy(char	*dest, char	*src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

// int main(void)
// {
//	 // Preparar variáveis para cada teste
//
//	 // TESTE 1: String normal
//	 printf("=== TESTE 1: String normal ===\n");
//	 char src1[] = "Hello World";
//	 char dest1[50];
//	 char dest1_orig[50];
//
//	 ft_strcpy(dest1, src1);
//	 strcpy(dest1_orig, src1);
//
//	 printf("Minha:	'%s'\n", dest1);
//	 printf("Original: '%s'\n", dest1_orig);
//	 printf("Iguais? %s\n\n", strcmp(dest1, dest1_orig) == 0 ? "SIM" : "NÃO");
//
//
//	 // TESTE 2: String vazia
//	 printf("=== TESTE 2: String vazia ===\n");
//	 char src2[] = "";
//	 char dest2[50];
//	 char dest2_orig[50];
//
//	 ft_strcpy(dest2, src2);
//	 strcpy(dest2_orig, src2);
//
//	 printf("Minha:	'%s'\n", dest2);
//	 printf("Original: '%s'\n", dest2_orig);
//	 printf("Iguais? %s\n\n", strcmp(dest2, dest2_orig) == 0 ? "SIM" : "NÃO");
//
//		
//	 // TESTE 3: Verificar retorno
//	 printf("=== TESTE 3: Retorno ===\n");
//	 char src3[] = "Test";
//	 char dest3[50];
//	 char *ret_minha = ft_strcpy(dest3, src3);
//	 char *ret_orig = strcpy(dest3, src3);
//
//	 printf("Minha retorna dest? %s\n", ret_minha == dest3 ? "SIM" : "NÃO");
//	 printf("Original retorna dest? %s\n\n", ret_orig == dest3 ? "SIM" : "NÃO");
//
//
//	 // TESTE 4: String com números/símbolos
//	 printf("=== TESTE 4: Números e símbolos ===\n");
//	 char src4[] = "42@#$%123";
//	 char dest4[50];
//	 char dest4_orig[50];
//
//	 ft_strcpy(dest4, src4);
//	 strcpy(dest4_orig, src4);
//
//	 printf("Minha:	'%s'\n", dest4);
//	 printf("Original: '%s'\n", dest4_orig);
//	 printf("Iguais? %s\n\n", strcmp(dest4, dest4_orig) == 0 ? "SIM" : "NÃO");
//
//     return 0;
// }
