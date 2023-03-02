/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: braloo <braloo@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 02:18:54 by braloo            #+#    #+#             */
/*   Updated: 2023/02/16 02:18:55 by braloo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	count;

	count = 0;
	while (*(str + count) != '\0')
	{
		if (str[count] >= 97 && str[count] <= 122)
		{
			str[count] += 32;
		}
		count++;
	}
	return (str);
}
