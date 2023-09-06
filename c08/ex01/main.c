/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgafaiti <lgafaiti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 17:31:16 by lgafaiti          #+#    #+#             */
/*   Updated: 2023/09/05 17:31:51 by lgafaiti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_boolean.h"

void ft_putstr(char * str)
{
  while (*str)
    write(1, str++, 1);
}
t_bool ft_is_even(int nbr)
{
  return ((EVEN(nbr)) ? TRUE : FALSE);
}
int main(int argc, char ** argv)
{
  (void) argv;
  if (ft_is_even(argc - 1) == TRUE)
    ft_putstr(EVEN_MSG);
  else
    ft_putstr(ODD_MSG);
  return (SUCCESS);
}