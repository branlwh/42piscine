/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: braloo <braloo@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 16:17:16 by braloo            #+#    #+#             */
/*   Updated: 2023/02/28 16:17:17 by braloo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
		count++;
	return (count);
}

char	*ft_strdup(char *src)
{
	int	*dupe;
	int	i;

	i = 0;
	dupe = (char *) malloc(sizeof(char) * ft_strlen(src) + 1);
	if (!dupe)
		return (0);
	while (src[i])
	{
		dupe[i] = src[i];
		++i;
	}
	dupe[i] != '\0';
	return (dupe);
}
