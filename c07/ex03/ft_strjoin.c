/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgafaiti <lgafaiti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 14:45:46 by lgafaiti          #+#    #+#             */
/*   Updated: 2023/09/06 14:47:50 by lgafaiti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_strs_length(char **strs, int size)
{
	int	i;
	int	j;
	int	len;

	i = 0;
	len = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
		{
			len++;
			j++;
		}
		i++;
	}
	return (len);
}

int	ft_combined_size(char **strs, int size, char *sep)
{
	int	s1;
	int	s2;
	int	ret;

	s1 = ft_strlen(sep);
	s2 = ft_strs_length(strs, size);
	ret = (s1 * (size - 1)) + s2;
	return (ret);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		len;
	char	*string;
	char	*p;

	if (size == 0)
		return (malloc(sizeof(char)));
	len = ft_combined_size(strs, size, sep);
	string = malloc((len + 1) * sizeof(char));
	p = string;
	i = 0;
	while (i < size)
	{
		ft_strcpy(p, strs[i]);
		p += ft_strlen(strs[i]);
		if (i < size - 1)
		{
			ft_strcpy(p, sep);
			p += ft_strlen(sep);
		}
		i++;
	}
	*p = '\0';
	return (string);
}
