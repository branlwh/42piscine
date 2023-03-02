/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: braloo <braloo@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 16:16:00 by braloo            #+#    #+#             */
/*   Updated: 2023/02/22 16:16:02 by braloo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int	i;

	i = nb;
	if (power > 1)
		return (nb * ft_recursive_power(nb, (power -1)));
	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	return (i);
}
