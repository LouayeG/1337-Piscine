/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgafaiti <lgafaiti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 17:51:30 by lgafaiti          #+#    #+#             */
/*   Updated: 2023/09/05 20:52:49 by lgafaiti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdlib.h>
#include <ft_stock_str.h>

int	ft_strlen(char *str)
{
	int i;
	i = 0;
	while (str[i])
		i++;
	return i;
}
char	*ft_strdup(char *src)
{
	int	i;
	int len;
	char	*dest;
	i = 0;
	len = ft_strlen(src);
	dest = (char *)malloc((len+1)*sizeof(char));
	if (!dest)
		return 0;
	while(src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return dest;
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	
}