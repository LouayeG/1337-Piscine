/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgafaiti <lgafaiti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 04:11:38 by lgafaiti          #+#    #+#             */
/*   Updated: 2023/09/04 23:29:46 by lgafaiti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	fact;
	int	i;
	i = 1;
	fact = 1;
	if (nb == 0)
	{
		return (1);
	}
	if (nb > 0)
	{
		while (i <= nb)
		{
			fact *= i;
			i++;
		}
		return (fact);
	}
	return (0);
}



