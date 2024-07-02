/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruiz-ur <mruiz-ur@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 12:56:34 by mruiz-ur          #+#    #+#             */
/*   Updated: 2024/06/25 12:59:34 by mruiz-ur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	int	valor;

	valor = '0';
	while (valor <= '9')
	{
		write(1, &valor, 1);
		valor++;
	}
}
