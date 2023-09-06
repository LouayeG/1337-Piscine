/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgafaiti <lgafaiti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 02:25:18 by lgafaiti          #+#    #+#             */
/*   Updated: 2023/09/06 14:46:39 by lgafaiti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	length;

	length = 0;
	while (str[length] != '\0')
	{
		length++;
	}
	return (length);
}

int	*ft_range(int min, int max)
{
	int	*tabs;
	int	i;

	if (min >= max)
	{
		return (0);
	}
	tabs = malloc(sizeof(*tabs) * (max - min));
	i = 0 ;
	while (min < max)
	{
		tabs[i] = min;
		i++;
		min++;
	}
	return (tabs);
}
