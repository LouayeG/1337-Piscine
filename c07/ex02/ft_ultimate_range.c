/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgafaiti <lgafaiti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 04:00:05 by lgafaiti          #+#    #+#             */
/*   Updated: 2023/09/06 14:47:33 by lgafaiti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*tab;
	int	i;
	int	j;
	int	len;

	i = 0;
	j = min;
	len = max - min;
	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	tab = (int *)malloc(sizeof(int));
	if (!tab)
		return (-1);
	while (j >= min && j < max)
	{
		tab[i] = j;
		i++;
		j++;
	}
	*range = tab;
	return (len);
}
