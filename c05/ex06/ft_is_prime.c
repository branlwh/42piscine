/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: braloo <braloo@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 17:15:11 by braloo            #+#    #+#             */
/*   Updated: 2023/02/23 17:15:13 by braloo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	a;

	a = 2;
	if (nb <= 1)
		return (0);
	while (a <= (nb / 2))
	{
		if (!(nb % a))
			return (0);
		else
			a += 1;
	}
	return (1);
}
