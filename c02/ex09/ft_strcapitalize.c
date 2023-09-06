/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgafaiti <lgafaiti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 16:11:49 by lgafaiti          #+#    #+#             */
/*   Updated: 2023/08/26 01:38:32 by lgafaiti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (i == 0)
		{
			if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - 32;
		}
		else if (str[i] == ' ')
		{
		++i;
			if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - 32;
		}
		else
		{
			if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
		}
		i++;
	}
	return (str);
}

