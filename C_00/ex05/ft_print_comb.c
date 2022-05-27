/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imoumini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 11:30:12 by imoumini          #+#    #+#             */
/*   Updated: 2022/03/22 20:42:46 by imoumini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char hundred, char ten, char unit, char coma)
{
	write(1, &hundred, 1);
	write(1, &ten, 1);
	write(1, &unit, 1);
	if ((hundred < '7'))
	{
		write(1, &coma, 1);
		write(1, " ", 1);
	}
}

void	ft_print_comb(void)
{
	char	unit;
	char	ten;
	char	hundred;
	char	coma;

	hundred = '0';
	ten = '0';
	unit = '0';
	coma = ',';
	while (hundred <= '7')
	{
		ten = hundred + 1;
		while (ten <= '8')
		{	
			unit = ten + 1;
			while (unit <= '9')
			{	
				ft_putchar(hundred, ten, unit, coma);
				unit++;
			}
			ten++;
		}
		hundred++;
	}
}
