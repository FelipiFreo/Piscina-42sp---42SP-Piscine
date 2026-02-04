/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: felforbe <felforbe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/27 23:02:45 by felforbe          #+#    #+#             */
/*   Updated: 2026/01/28 01:36:31 by felforbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <unistd.h>
// #include <string.h>
// #include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

// int main(void)
// {
//	 // TESTE 1: n menor que src
//	 printf("=== TESTE 1: n menor que src ===\n");
//	 char src1[] = "Hello World";
//	 char dest1[20] = "XXXXXXXXXXXXXXXXXX";
//	 char dest1_orig[20] = "XXXXXXXXXXXXXXXXXX";
//
//	 ft_strncpy(dest1, src1, 5);
//	 strncpy(dest1_orig, src1, 5);
//
//	 printf("Minha:	'%s'\n", dest1);
//	 printf("Original: '%s'\n", dest1_orig);
//	 printf("Primeiros 5 chars iguais? %s\n\n", 
//			memcmp(dest1, dest1_orig, 5) == 0 ? "SIM" : "NÃO");
//
//
//	 // TESTE 2: n maior que src
//	 printf("=== TESTE 2: n maior que src ===\n");
//	 char src2[] = "Hi";
//	 char dest2[20] = "XXXXXXXXXXXXXXXXXX";
//	 char dest2_orig[20] = "XXXXXXXXXXXXXXXXXX";
//
//	 ft_strncpy(dest2, src2, 10);
//	 strncpy(dest2_orig, src2, 10);
//
//	 printf("Minha:	'%s'\n", dest2);
//	 printf("Original: '%s'\n", dest2_orig);
//	 printf("Primeiros 10 bytes iguais? %s\n\n",
//			memcmp(dest2, dest2_orig, 10) == 0 ? "SIM" : "NÃO");
//
//
//	 // TESTE 3: n igual ao tamanho de src (sem contar \0)
//	 printf("=== TESTE 3: n igual ao tamanho de src ===\n");
//	 char src3[] = "Test";
//	 char dest3[20] = "XXXXXXXXXXXXXXXXXX";
//	 char dest3_orig[20] = "XXXXXXXXXXXXXXXXXX";
//
//	 ft_strncpy(dest3, src3, 4);
//	 strncpy(dest3_orig, src3, 4);
//
//	 printf("Minha:	'%.4s'\n", dest3);  // %.4s limita exibição
//	 printf("Original: '%.4s'\n", dest3_orig);
//	 printf("Primeiros 4 bytes iguais? %s\n\n",
//		memcmp(dest3, dest3_orig, 4) == 0 ? "SIM" : "NÃO");
//
//
//	 // TESTE 4: String vazia
//	 printf("=== TESTE 4: String vazia ===\n");
//	 char src4[] = "";
//	 char dest4[20] = "XXXXXXXXXXXXXXXXXX";
//	 char dest4_orig[20] = "XXXXXXXXXXXXXXXXXX";
//
//	 ft_strncpy(dest4, src4, 5);
//	 strncpy(dest4_orig, src4, 5);
//
//	 printf("Minha:	'%s'\n", dest4);
//	 printf("Original: '%s'\n", dest4_orig);
//	 printf("Primeiros 5 bytes iguais? %s\n\n",
//		memcmp(dest4, dest4_orig, 5) == 0 ? "SIM" : "NÃO");
//
//
//	 // TESTE 5: Verificar retorno
//	 printf("=== TESTE 5: Retorno ===\n");
//	 char src6[] = "Return test";
//	 char dest6[20];
//	 char *ret = ft_strncpy(dest6, src6, 6);
//
//	 printf("Retorna dest? %s\n", ret == dest6 ? "SIM" : "NÃO");
//
//     return 0;
// }
