/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: felforbe <felforbe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/01 18:22:47 by felforbe          #+#    #+#             */
/*   Updated: 2026/02/02 20:24:59 by felforbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i_dest;
	unsigned int	i_src;
	unsigned int	i;

	i_dest = 0;
	i_src = 0;
	i = 0;
	while (dest[i_dest] && i_dest < size)
		i_dest++;
	while (src[i_src])
		i_src++;
	if (size <= i_dest)
		return (size + i_src);
	while (i < (size - i_dest - 1) && src[i])
	{
		dest[i_dest + i] = src[i];
		i++;
	}
	if (i_dest < size)
		dest[i_dest + i] = '\0';
	return (i_dest + i_src);
}
