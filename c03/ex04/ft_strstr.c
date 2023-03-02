/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: braloo <braloo@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 13:01:44 by braloo            #+#    #+#             */
/*   Updated: 2023/02/19 13:01:45 by braloo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	char1;
	int	char2;

	char1 = 0;
	char2 = 0;
	if (to_find[char2] == '\0')
		return (str);
	while (str[char1] != '\0')
	{
		while (str[char1 + char2] == to_find[char2]
			&& str[char1 + char2] != '\0')
			char2++;
		if (to_find[char2] == '\0')
			return (str + char1);
		char1++;
		char2 = 0;
	}
}
