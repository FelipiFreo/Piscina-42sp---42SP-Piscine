/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: felforbe <felforbe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/04 21:40:06 by felforbe          #+#    #+#             */
/*   Updated: 2026/02/04 21:46:38 by felforbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	prime_verifier(int nb, int i)
{
	if (i * i > nb)
		return (1);
	if (nb % i == 0)
		return (0);
	return (prime_verifier(nb, i + 1));
}

int	ft_is_prime(int nb)
{
	if (nb == 2)
		return (1);
	if (nb % 2 == 0 || nb <= 1)
		return (0);
	return (prime_verifier(nb, 3));
}

int	ft_find_next_prime(int nb)
{
	while (!ft_is_prime(nb))
		nb++;
	return (nb);
}
