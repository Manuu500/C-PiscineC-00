/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruiz-ur <mruiz-ur@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 12:57:05 by mruiz-ur          #+#    #+#             */
/*   Updated: 2024/06/25 14:29:21 by mruiz-ur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	int	leter;

	if (n < 0)
	{
		leter = 'N';
		write(1, &leter, 1);
	}
	else
	{
		leter = 'P';
		write(1, &leter, 1);
	}
}
