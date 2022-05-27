/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imoumini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 12:33:39 by imoumini          #+#    #+#             */
/*   Updated: 2022/03/15 19:45:43 by imoumini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	long	number;
	char	minus;
	char	write_number;

	number = nb;
	minus = '-';
	if (number < 0)
	{
		number = number * -1;
		write(1, &minus, 1);
	}	
	if (number >= 0)
	{
		if (number <= 9)
		{
			write_number = number + 48;
			write(1, &write_number, 1);
		}
		if (number > 9)
		{	
			ft_putnbr(number / 10);
			ft_putnbr(number % 10);
		}
	}	
}
