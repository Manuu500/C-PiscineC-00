/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruiz-ur <mruiz-ur@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 12:55:42 by mruiz-ur          #+#    #+#             */
/*   Updated: 2024/06/25 15:03:49 by mruiz-ur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	int	valor ;

	valor = 'a';
	while (valor <= 'z')
	{
		write(1, &valor, 1);
		valor++;
	}
}
