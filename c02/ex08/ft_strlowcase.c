/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: braloo <braloo@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 01:25:53 by braloo            #+#    #+#             */
/*   Updated: 2023/02/16 01:25:55 by braloo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	count;

	count = 0;
	while (*(str + count) != '\0')
	{
		if (str[count] >= 65 && str[count] <= 90)
		{
			str[count] += 32;
		}
		count++;
	}
	return (str);
}
