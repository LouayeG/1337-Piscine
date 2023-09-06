/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgafaiti <lgafaiti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 15:09:31 by lgafaiti          #+#    #+#             */
/*   Updated: 2023/08/19 14:16:00 by lgafaiti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	while (a <= 98)
	{
		b = 1;
		while (b <= 99)
		{
			if (a < b)
			{
				ft_putchar(48 + a / 10);
				ft_putchar(48 + a % 10);
				write(1, " ", 1);
				ft_putchar(48 + b / 10);
				ft_putchar(48 + b % 10);
				if (a < 98)
				{
					write(1, ", ", 2);
				}
			}
		b++;
		}
	a++;
	}
}
