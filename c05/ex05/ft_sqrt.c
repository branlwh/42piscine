/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: braloo <braloo@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 16:28:27 by braloo            #+#    #+#             */
/*   Updated: 2023/02/22 16:28:29 by braloo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	long	index;

	if (nb <= 0)
		return (0);
	if (nb == 1)
		return (1);
	index = 2;
	if (nb >= 2)
	{
		while (index * index <= nb)
		{
			if (index * index == nb)
				return (index);
			index++;
		}
	}
	return (0);
}
