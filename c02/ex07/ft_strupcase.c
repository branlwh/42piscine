/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: braloo <braloo@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 00:54:38 by braloo            #+#    #+#             */
/*   Updated: 2023/02/16 00:54:40 by braloo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int	count;

	count = 0;
	while (*(str + count) != '\0')
	{
		if (str[count] >= 97 && str[count] <= 122)
		{
			str[count] -= 32;
		}
		count++;
	}
	return (str);
}
