/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: braloo <braloo@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 21:47:53 by braloo            #+#    #+#             */
/*   Updated: 2023/02/14 21:47:54 by braloo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	count;

	count = 0;
	while (src[count] != '\0' && n > 0)
	{
		dest[count] = src[count];
		count++;
		n--;
	}
	while (n > 0)
	{
		dest[count] = '\0';
		count++;
		n--;
	}
	return (dest);
}
